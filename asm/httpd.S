; Simple HTTPd coded in assembly, use Fasm to assemble (www.flatassembler.net)

; Usage: ./httpd [port]

; The port argument is not compulsary, if it isn't supplied, port 80 will be
; used.

format ELF executable
use32

LOGGING = 1		; Setting this to 1 makes the program print out the IP and what
				; file is requested of any incomming connections.


; Macro to print out whats pointed to by msg (of length msglen) to standard 
; output using the write kernel call.
macro print msg,msglen
{ common
    push eax ebx ecx edx
    push msglen
    push msg
    mov eax, 4
    mov ebx, 1
    pop ecx
    pop edx
    int 0x80
    pop edx ecx ebx eax
}

; Macro to send whats pointed to by msg (of length msglen) to the socket stored
; in peer.
macro tcpsend msg,msglen
{ common
	push eax ebx ecx
    pushd 0 msglen msg [peer]
    mov eax, 102
    mov ebx, 9
    mov ecx, esp
    int 0x80
    add esp, 16
	pop ecx ebx eax
}


; Set it up so that signal 17 (CLD_EXITED), which is raised any time that a
; child thread exits, calls the function at the label "sigchld" (defined in
; the data object sigaction, see data at bottom of file)
mov eax, 67
mov ebx, 17
mov ecx, sigaction
xor edx, edx
int 0x80

; Check whether any parameters were passed to the program, if there is one,
; convert that string to an integer and put it into "port". If there is no
; parameters, use the default value of 80 as the port.
socket:
pop eax
cmp eax, 1
jne @f
mov [port], 80
jmp .defport

@@:
pop eax edi
mov ebx, 10
call StrToInt
mov [port], eax

; Create a new socket and store the descriptor in "sockfd".
; Note: All the network-based kernel calls are a little strange compared to
;       other kernel calls. They all go through call number 102 (socketcall)
;       and take ebx as the type of call to make, then takes any extra
;       parameters from a memory location pointed to by ecx, which in my case
;       I use the stack for.
.defport:
pushd 0 1 2
mov eax, 102
mov ebx, 1
mov ecx, esp
int 0x80
add esp, 12
mov [sockfd], eax

; Call setsockopt to try and reuse an unnused port if another program has just
; finished using it, but the kernel still has a partial hold on it.
setsockopt:
pushd 4 0 2 1 eax
mov ebx, esp
add ebx, 4
mov [esp+12], ebx
mov eax, 102
mov ebx, 14
mov ecx, esp
int 0x80
add esp, 20

; Bind the socket to the required port and exit if that port is currently in
; use by another process.
bind:
mov eax, [port]
and eax, 0xffff
ror ax, 8
mov word [sockaddr+2], ax
pushd 16 sockaddr [sockfd]
mov eax, 102
mov ebx, 2
mov ecx, esp
int 0x80
cmp eax, 0xFFFFFF9E
jne @f
print inuse,inuse.len
jmp exit
@@:
add esp, 12

; Start to listen for incomming connections, allowing for a queue size of
; waiting connections of 20.
listen:
pushd 20 [sockfd]
mov eax, 102
mov ebx, 4
mov ecx, esp
int 0x80
add esp, 8

; Try to accept a connection. If there is currently no connection, it will just
; sit there and wait patiently until a connection does come in.
accept:
pushd sixteen peeraddr [sockfd]
mov eax, 102
mov ebx, 5
mov ecx, esp
int 0x80
add esp, 12
cmp eax, 0
jle accept
mov dword [peer], eax

; Creates a child process at this point to handle the new connection, this
; allows a thread to deal with the request while the main program can go back
; to listening for more connections.
fork:
mov eax, 2
int 0x80
cmp eax,0
jne accept

; Attempt to receive bufferlen amount of data from the incomming connection.
; This will be the GET /directory/file.html HTTP/1.1 string, followed a whole
; load of information on the browser, like what languages and locales it
; supports.
child:
recv:
pushd 0 bufferlen buffer [peer]
mov eax, 102
mov ebx, 10
mov ecx, esp
int 0x80
add esp, 16
;push eax

; That's us got the request in the buffer, now comes the time to parse it.
; First of all, check that it is a GET request. If it isnt, it disconnects the
; client, this means that they either tried to connect to this server with 
; something other than a browser or it could be that they are trying to use the
; HTTP POST command, which this server doesnt support.
mov ebx, buffer
cmp dword [ebx], 'GET '
jne endpeer

; Simple code just to look for a / (rep scasb is supposed to be slow in a new)
; processors), and i doubt that it would speed this thing up any more since it
; usually doesnt even have to go round the loop once.
xor ecx, ecx
@@:
inc ebx
cmp byte [ebx], '/'
jne @b
@@:

; Now iterate through the string in the buffer until it either finds a space
; (in which case it will stop, since that will be the end of the file path), or
; a % (in which case it will convert the next 2 bytes from ASCII hex to an
; actual byte.
parse:
inc ebx
cmp byte [ebx], ' '
je @f
cmp byte [ebx], '%'
je .hex
mov al, [ebx]
mov [buffer+ecx], al
inc ecx
jmp @b
@@:
mov byte [buffer+ecx], 0
mov [offset], ecx
jmp @f

; This is the code for converting the hex ASCII word to a binary byte.
; Just uses the StrToInt code.
.hex:
inc ebx
mov dx, [ebx]
mov word [fd], dx
mov word [fd+2], 0
mov edi, fd
push ebx
mov ebx, 16
call StrToInt
pop ebx
mov [buffer+ecx], al
inc ebx
inc ecx
jmp parse

@@:

; If logging has been enabled, itll use the function called ntop (at the bottom
; of this code) to convert the IP address of the person who connected to the
; server into a string form and print it.
if LOGGING
mov eax, dword [peeraddr+4]

mov edi, buffer+bufferlen-16
call ntop
print buffer+bufferlen-16, ecx
mov ecx, [offset]  ; ntop smashes ecx, but we need it later, so restore it
end if

; Now stat the actual file, storing the data about that file/directory in stat.
statf:

; If the current directory is requested, a . must be added for fstat to work
; as desired.
cmp ecx, 0
jne @f
mov dword [buffer], 0x002E
mov dword [offset], 1
@@:

mov eax, 106
mov ebx, buffer
mov ecx, stat
int 0x80
cmp eax, 0
je @f

; It it cant find the file, send a basic 404 HTML page (just a string stored in
; the data section.
tcpsend h404,h404.len
; And if we are logging, then print out the fact that the file was not found,
; along with what the file requested actually was.
if LOGGING
print l404,l404.len
mov eax, [offset]
mov byte [buffer+eax], 10
add eax, 2
mov byte [buffer-1], '/'
print buffer-1, eax
end if
jmp endpeer
@@:
; Checks to see if what the client requested was a directory, if it was, try to
; open index.html in that directory.
mov eax, dword [stat+20]
mov [fdlen], eax
mov eax, dword [stat+8]
and eax, 0x0000f000
cmp eax, 0x00004000
jne @f
mov ecx, [offset]
;add ecx, buffer
mov dword [buffer+ecx], '/ind'			; These 3 lines can be modified to make the
mov dword [buffer+ecx+4], 'ex.h'		; program look for any file by default.
mov dword [buffer+ecx+8], 0x006C6D74	; Dont forget the 0x00 at the end though,
add ecx, 12
mov [offset], ecx
jmp statf						; cause statf and open take in an ASCIIZ string

@@:

if LOGGING
; If we got here, then we found the file, and logging is enabled, so print out
; the success code and the file which we will send them to stdout.
print l200,l200.len
mov eax, [offset]
inc eax
mov byte [buffer+eax], 10
add eax, 2
mov byte [buffer-1], '/'
print buffer-1, eax
end if

; Open the file.
open:
mov eax, 5
mov ebx, buffer
xor ecx, ecx
int 0x80
mov [fd], eax

; Retrieve the file size from the earlier statf call, convert it to a string,
; and place it into the HTML 200 File Found string which we will be sending
; to the client. It's not compulsary to send the file size, but it's nice
; because it means you can see a progress bar on the client end, rather than
; the neverending loop which just tells you the download speed.
mov eax, [fdlen]
mov ebx, 10
mov edi, inuse
call IntToStr
sub edi, inuse
mov dword [inuse+edi-1], 0x0a0d0a0d
add edi, h200.len+3
tcpsend h200,edi

; Call sendfile, a kernel call which takes in a connected socket, a file
; descriptor, and the length of that file, and sends it through that socket.
; I tested doing this using the open, mmap, then multiple sends (for when the
; file is bigger than the max packet size), but this used a lot more memory,
; (since it was mmap the whole file, which actually caused it not to work for
; files which are larger than your available RAM), and was slower. So instead
; of writing a whole function to mmap and send parts of the file at a time, I
; just decided to use this very handy system call, which gives great
; performance.
mov eax, 187
mov ebx, [peer]
mov ecx, [fd]
xor edx, edx
mov esi, [fdlen]
int 0x80

; Finished sending the file, so close the file descriptor.
mov eax, 6
mov ebx, [fd]
int 0x80

endpeer:
exit:
; Exit the thread, using the peer's socket descriptor as a exit value.
; This is so that I can later close this peer's socket properly inside the
; signal handler, which runs in the main program.
mov eax, 1
mov ebx, [peer]
int 0x80

if LOGGING
; Just a function to convert an IP address from network mode (32-bit binary
; with each byte being a section of the IP) to a string.
ntop:
; eax = network-order address, edi = buffer
; returns: ecx = length
push ebx edx ebp
mov ebp, edi
mov edx, eax
sub esp, 16
mov ebx, 10

;num4
and eax, 0x000000FF
call IntToStr
mov byte [edi-1], '.'
sub edi, ebp
mov ecx, edi

;num3
mov eax, edx
and eax, 0x0000FF00
shr eax, 8
mov edi, ebp
add edi, ecx
call IntToStr
mov byte [edi-1], '.'
sub edi, ebp
mov ecx, edi

;num2
mov eax, edx
and eax, 0x00FF0000
shr eax, 16
mov edi, ebp
add edi, ecx
call IntToStr
mov byte [edi-1], '.'
sub edi, ebp
mov ecx, edi

; num1
mov eax, edx
shr eax, 24
mov edi, ebp
add edi, ecx
call IntToStr
sub edi, ebp
mov ecx, edi
dec ecx
pop ebp edx ebx
add esp, 16
ret
end if

; These two String/Integer converting functions aren't mine, I found them on
; the flatassembler forum, and they were a lot better than my old ones.
IntToStr:
; eax = number, ebx = base, edi = buffer
push    ecx edx
xor ecx,ecx
  .new:
xor edx,edx
div ebx
push    edx
inc ecx
test    eax,eax
jnz .new
 .loop:
pop eax
add al,30h
cmp al,'9'
jng .ok
add al,7    
 .ok:
stosb
loop    .loop
mov al,0
stosb
pop edx ecx
ret

StrToInt:
; edi = buffer, ebx = base
push    edx edi
xor eax,eax
xor edx,edx
 .loop:
mov dl,byte [edi]
test    dl,dl
jz  .end
imul    eax,ebx
sub dl,'0'
cmp dl,9
jle .ok
sub dl,7
  .ok:
add eax,edx
inc edi
jmp .loop
  .end:
pop edi edx
ret

; This is the signal handler which gets assigned to signal 17 (CLD_EXITED).
sigchld:
; Gets the PID of the running thread which raised the EXITED signal.
mov eax, 7
mov ebx, -1
mov ecx, peer
mov edx, 1
int 0x80

; If there were no PIDs, exit the signal handler
cmp eax, 0x80000000
ja .end

; Retrieves the return value of the child and passes it as an argument to
; the close system call to close the connection with the peer.
mov edx, eax
xor ebx, ebx
mov bl, byte [peer+1]
mov eax, 6
int 0x80

jmp sigchld
.end:
ret


; DATA Section

h404 db 'HTTP/1.1 404 Not Found',13,10,13,10,'<HTML><HEAD><TITLE>404 Not Found</TITLE></HEAD><BODY><H1>File Not Found</H1></BODY></HTML>',10,13
.len = $ - h404
h200 db 'HTTP/1.1 200 OK',13,10,'Content-Length: '
.len = $ - h200
inuse db 'Port already in use, exiting..',10
.len = $ - inuse

if LOGGING
l404 db ' - 404 NF - '
.len = $ - l404
l200 db ' - 200 OK - '
.len = $ - l200
end if

; Full description of sigaction structure in /usr/include/asm/signal.h
sigaction:
.sa_handler dd sigchld
.sa_flags dd 0
.sa_restorer dd 0
.sa_mask dd 1


; Full description of sockaddr structure in /usr/include/bits/socket.h (and
; others).
sockaddr dw 2, 0
          dd 0, 0, 0

peeraddr rb 16
port rd 1
sixteen dd 16
sockfd rd 1
peer rd 1
fd rd 1
fdlen rd 1
stat rb 88
buffer rb 512
bufferlen = $ - buffer
offset rd 1
