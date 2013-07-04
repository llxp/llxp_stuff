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

#ifndef INADDR_NONE
#define INADDR_NONE 0xffffffff /* should be in <netinet/in.h> */
#endif

#define SERVER_PORT 85

//char **filearray;


char * cut_string(char *search_c, char *string_content){
    char *searchStart_c;
    int string_find;
    searchStart_c = strstr(string_content, search_c);
	if(searchStart_c == NULL) {
		return string_content;
	}else{
	    string_find=strcspn(string_content, search_c);
	    string_content[string_find]='\0';
	}
return string_content;
}

int lines(char *file_){
    FILE * file;
//    FILE * file_row;
file = fopen(file_, "r");
int c=0;
//int c_=0;
int counter=0;

int len=0;
while(c!=EOF){
    c=getc(file);
    if(c=='\n'){
        counter++;
    }
        //printf("%d Zeichen in Zeile %d\n", counter_row, counter);
        //sprintf(rowmem_string, "%d,", counter_row);
        //strcat(rowmem, rowmem_string);
    len++;
}
fclose(file);
/*
rowmem=malloc(sizeof(char) *counter*2);
file_row=fopen(file_, "r");
while(c_!=EOF){
    c_=getc(file_row);
        if(c_=='\n'){
            sprintf(rowmem_string, "%d,", counter_row);
            printf("%d", counter_row);
            strcat(rowmem, rowmem_string);
            counter_row=0;
        }else{
            counter_row++;
        }
}
fclose(file_row);
printf("%s", rowmem);*/
return counter;
}

int **rows(char *file_x){
    //char rowmem_string[4];
    //char *rowmem;
    int **rowmem;
    int counter_row=0;
    FILE * file_xx;
    file_xx = fopen(file_x, "r");
    int c_=0;
    int linenumber=lines(file_x);
    rowmem=malloc(sizeof(int *) *linenumber);
    if(NULL==rowmem){
        printf("Kein virtueller RAM mehr vorhanden ... !\n");
        return 0;
    }
    //for(i = 0; i < linenumber; i++) {
        while(c_!=EOF){
            c_=getc(file_xx);
            if(c_=='\n'){
                counter_row=0;
                counter_line++;
                      rowmem[counter_line] = malloc(counter_row * sizeof(int));
         if(NULL == rowmem[cunter_line]) {
            printf("Kein Speicher mehr fuer Zeile %d\n",i);
            return 0;
         }
            }
            else{
                counter_row++;
                counter_line=0;
            }
        }
   //}
    fclose(file_xx);
    return rowmem;
}

int row_output(char *filename, int line){
    int i;
    FILE *filetoopen;
    filetoopen=fopen(filename,"r");
    //char pufferx_[1024];
    //char **truerow;
    char *rowsnumbers=rows(filename);
    int ln=0;
    /*for(i=0;i<line;i++){
        fgets(pufferx_, 1024, filetoopen);
    }*/
    for(i=0;i<lines(filename);i++){
        printf("%i,", rownumbers[i+1]);
    }
    //matrix=malloc();
    /*while(ln<lines(filename)){
        if(truerow[ln]=malloc(sizeof(char)*rowsnumbers[ln+1])==NULL){
            printf("Can't allocate memory!");
        }else{
            for(i=0;i<rowsnumbers[ln+1];i++){
                truerow[ln][i]=0;
            }
            //strcpy(truerow[ln], );
            //strcpy();
            //hier weiterschreiben!
            //printf("%i\n",rowsnumbers[ln+1]);

        }
        ln++;
    }*/
    fclose(filetoopen);
    return 0;
}
void fileloader(char *filename_x){
}
int loop_content(){
    return 0;
}

char *openreadsocket(int socket){
    return 0;
}
int main(int argc, char *argv[]) {
        char *file__ = "test.htm";
//    char rowmem_string[4];
//    char *text = NULL;
//    int len = 0;
//    int c=0;
struct hostent *hp_new; /* from gethostbyname() */
    // Sender Variablen
    int sock, bytes;
    int sock_new;
  char buf[1024]="hallo";
  char *xd="bla";
  strcpy(buf, xd);
  struct sockaddr_in  srv_addr;  /* server's Internet socket address */
// Sender Variablen

// Listening/Server Variablen
//    FILE *file;
//    int counter=0;
//    int counter_row=0;
/*    char puffer[20];
    char **globpuffer;*/
//char *sysmsg, *sysmsg_;
unsigned int server_port=atoi(argv[1]);
unsigned int server_port_new=atoi(argv[3]);
  char message[1024];
  struct sockaddr_in name;
//  struct hostent *hp, *gethostbyname();
/*

//  char *sf;
    char *file_ = "test.htm";
// Listening/Server Variablen
        file = fopen(file_, "r");
        if(file!=NULL){
            bzero(globpuffer, 1024);
            while(fgets(puffer, 1024, file)!=NULL){
                //printf("line %d:%s", counter,puffer);
                //sf=strtok('\n', puffer);
                //printf("1:%s\n2:%s\n", cut_string("\n", puffer), puffer);
                globpuffer[counter] = (char *)malloc(strlen(puffer)* sizeof(char));
                if(NULL==globpuffer[counter]){
                    return 0;
                }
                strcpy(globpuffer[counter],puffer);
                counter++;
            }
        }*/

//char *xyz=row_output(file__, 0);
//printf("!!!!!!!!!!!!!!::::%d::::!!!!", lines(file__));
//text = malloc(lines(file__)*sizeof(char));
//printf("achtung: %s\n", rows(file__));
//printf("%d Zeilen\n", len);
printf("\nZeile ist %i Zeichen lang!\n\n", row_output(file__, 0));

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

  printf("Web Server runs on port number #%d\n", ntohs(name.sin_port));
start:
    while((bytes = read(sock, message, 1024)) > 0) {
    message[bytes] = '\0';
    printf("recv: %s\n", message);
if(strstr(message, "/")){
  //Sender opening connection
  bzero((char *) &srv_addr, sizeof(srv_addr));
  srv_addr.sin_family = AF_INET;
  srv_addr.sin_port = htons(server_port_new);
  if ((hp_new = gethostbyname(argv[2])) == NULL) {
    perror("host name error");
    exit(1);
  }
  bcopy(hp_new->h_addr, (char *) &srv_addr.sin_addr, hp_new->h_length);
//Sender opening connection
      //Sender Socket initialization
  if ((sock_new = socket(AF_INET, SOCK_DGRAM, 0)) < 0) {
    perror("opening udp socket");
    exit(1);
  }
  //Sender Socket initialization
      /* not strictly needed with UDP socket, but binds local half */
  if (connect(sock_new, (struct sockaddr *) &srv_addr, sizeof(srv_addr))<0) {
    perror("connect error");
    close(sock_new);
    exit(1);
  }
  strcpy(buf, message);
        if (send(sock_new, buf, strlen(buf), 0) != strlen(buf)){
      perror("send");
      close(sock_new);
  }
  close(sock_new);
    //printf("xyz");
        //sysmsg=strtok(message,"msg");
        //if(NULL!=sysmsg){
            //printf("%s", globpuffer[0]);
        //sysmsg_=strtok(sysmsg, "[");
        //printf("%s\n", sysmsg);
        //printf("%s", globpuffer[0]);

        //}

//sysmsg=strtok(message,"xxx");
//system(sysmsg);
}else{
goto start;
}
  }goto start;
  close(sock);
  close(sock_new);
}

