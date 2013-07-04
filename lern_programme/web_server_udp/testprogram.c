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
    int counter_line;
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
         if(NULL == rowmem[counter_line]) {
            printf("Kein Speicher mehr fuer Zeile %d\n",counter_line);
            return 0;
         }
         //rowmem[counter_line][counter_row]=1;
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

int main(void){
    int **xd=rows("test.htm");
    printf("%i", xd[0][0]);
return 0;
}
