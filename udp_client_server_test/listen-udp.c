/*
 * listen-udp.c - Illustrate simple TCP connection
 * It opens a blocking socket and
 * listens for messages in a for loop.  It takes the name of the machine
 * that it will be listening on as argument.
 */

#include <sys/socket.h>
#include <arpa/inet.h>
#include <stdio.h>
#include <fcntl.h>
#include <string.h>
#include <stdlib.h>
#include <netdb.h>       /* struct hostent */
#include <pwd.h>
#include <sys/types.h>   /* For <netinet/in.h> */
#include <netinet/in.h>  /* For struct sockaddr_in */
#include "/home/llxp/Downloads/listen-udp-funcs.h"

#ifndef INADDR_NONE
#define INADDR_NONE 0xffffffff /* should be in <netinet/in.h> */
#endif

#define SERVER_PORT 85

int main(int argc, char *argv[]) {
    FILE *file;
    int counter=0;
    char puffer[20];
    char *globpuffer[2048];
char *sysmsg, *sysmsg_;
unsigned int server_port=atoi(argv[1]);
  char message[1024];
  int sock;
  struct sockaddr_in name;
  struct hostent *hp, *gethostbyname();
  int bytes;
  char *sf;
    char *file_ = "test.htm";
        file = fopen(file_, "r");
        if(file!=NULL){
            while(fgets(puffer, 1024, file)!=NULL){
                printf("\n\nabc:%s", puffer);
                //sf=strtok('\n', puffer);
                //printf("1:%s\n2:%s\n", cut_string("\n", puffer), puffer);
                globpuffer[counter] = (char *)malloc(strlen(puffer)* sizeof(char));
                if(NULL==globpuffer[counter]){
                    return 0;
                }
                strcpy(globpuffer[counter],puffer);
                counter++;
            }
        }
        printf("xxx:%s\n", globpuffer[0]);
  printf("Listen activating.\n");

  /* Create socket from which to read */
  sock = socket(AF_INET, SOCK_DGRAM, 0);
  if (sock < 0)   {
    perror("Opening datagram socket");
    return 0;
  }

  /* Bind our local address so that the client can send to us */
  bzero((char *) &name, sizeof(name));
  name.sin_family = AF_INET;
  name.sin_addr.s_addr = htonl(INADDR_ANY);
  name.sin_port = htons(server_port);

  if (bind(sock, (struct sockaddr *) &name, sizeof(name))) {
    perror("binding datagram socket");
    return 0;
  }

  printf("Socket has port number #%d\n", ntohs(name.sin_port));
start:
while((bytes = read(sock, message, 1024)) > 0) {
    message[bytes] = '\0';
    printf("recv: %s\n", message);
if(strstr(message, "msg")){
    printf("xyz");
        sysmsg=strtok(message,"msg");
        if(NULL!=sysmsg){
            //printf("%s", globpuffer[0]);
        sysmsg_=strtok(sysmsg, "[");
        printf("%s\n", sysmsg);
        printf("%s", globpuffer[0]);

        }

//sysmsg=strtok(message,"xxx");
//system(sysmsg);
}else{
goto start;
}
  }goto start;
  close(sock);
}

