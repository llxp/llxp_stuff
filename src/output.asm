.section .data
#hello: .ascii "Hello World!\n"#13
html: .ascii "<html>"#6
body: .ascii "<body>"#6
link: .ascii "<a href='index'"#15
linksnd: .ascii ">hallo</a>"#10
htmlclose: .ascii "</body></html>"#14
.section .text
.globl _start
_start:
#mov $4, %eax
mov $1, %ebx
#mov $hello, %ecx
#mov $13, %edx
#int $0x80

mov $4, %eax
mov $1, %ebx
mov $html, %ecx
mov $6, %edx
int $0x80

mov $4, %eax
mov $body, %ecx
mov $6, %edx
int $0x80

mov $4, %eax
mov $link, %ecx
mov $15, %edx
int $0x80

mov $4, %eax
mov $linksnd, %ecx
mov $10, %edx
int $0x80

mov $4, %eax
mov $htmlclose, %ecx
mov $14, %edx
int $0x80

mov $1, %eax
mov $0, %ebx
int $0x80
#4 fuer den Syscall 'write'
#File Descriptor
#Speicheradresse des Textes
#Laenge des Textes
#und los
# das
# uebliche
# beenden
