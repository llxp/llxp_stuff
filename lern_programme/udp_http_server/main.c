#include "../webframework_new/defined.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <fcntl.h>
#include <sys/types.h>
extern FILE *file;
int sockfd,n;
   struct sockaddr_in servaddr,cliaddr;
   char sendline[1000];
   char recvline[1000];
   char *sysmsg;
unsigned int server_port=atoi(argv[1]);
  char message[1024];
  int sock;
  struct sockaddr_in name;
  struct hostent *hp, *gethostbyname();
  int bytes;
int main()
{

    char puffer[20];
    char *file_ = "test.htm";
        file = fopen(file_, "r");
        if(NULL!=file){
      while(fgets(puffer, 20, file)!=0){
      printf("%s", puffer);
       }}




    printf("Hello world!\n");
    return 0;
}
