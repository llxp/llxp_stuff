/*
 * talk-udp.c - Illustrate simple UDP sockets
 * Calls a server named as the first argument
 */

#include <stdio.h>
#include <sys/types.h>   /* For <netinet/in.h> */
#include <netinet/in.h>  /* For struct sockaddr_in */
#include <arpa/inet.h>
#include <sys/socket.h>
#include <netdb.h>       /* struct hostent */
#include <pwd.h>
#include <string.h>
#include <unistd.h>

#ifndef INADDR_NONE
#define INADDR_NONE 0xffffffff /* should be in <netinet/in.h> */
#endif

#define SERVER_PORT 85
//unsigned int server_port=85;
int main(int argc, char *argv[]) {
unsigned int server_port;
server_port=atoi(argv[2]);
int i, sock, bytes;
  char buf[80];
  struct sockaddr_in  srv_addr;  /* server's Internet socket address */
  struct hostent      *hp; /* from gethostbyname() */

  if (argc != 3) {
    printf("Usage: %s <Internet host>\n", argv[0]);
    exit(1);
  }

  bzero((char *) &srv_addr, sizeof(srv_addr));
  srv_addr.sin_family = AF_INET;
  srv_addr.sin_port = htons(server_port);
  if ((hp = gethostbyname(argv[1])) == NULL) {
    perror("host name error");
    exit(1);
  }
  bcopy(hp->h_addr, (char *) &srv_addr.sin_addr, hp->h_length);

  if ((sock = socket(AF_INET, SOCK_DGRAM, 0)) < 0) {
    perror("opening udp socket");
    exit(1);
  }

  /* not strictly needed with UDP socket, but binds local half */
  if (connect(sock, (struct sockaddr *) &srv_addr, sizeof(srv_addr))<0) {
    perror("connect error");
    exit(1);
  }

  while (gets(buf)) {
    printf("sending: %s\n", buf);
    if (send(sock, buf, strlen(buf), 0) != strlen(buf))
      perror("send");
  }

  close(sock);
}

