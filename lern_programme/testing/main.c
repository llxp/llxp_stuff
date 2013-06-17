#define field_a  4
#define field_b 1024
#define field_c 1024
//#define ROWLEN 20
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <regex.h>

char *parser(char *str_) {
   //char *s="";
   char* res="";
   char* res_="";
   char* string_1="";
   int i, i_;
   /* Irgendwo gibt es auch eine Grenze, hier sind
      MAX_PAARE erlaubt. */
    char *paare[255];
    char *paare_[255][2];
//   struct CGI_DATEN *ptr_daten = NULL;
//   struct CGI_DATEN *ptr_anfang = NULL;
//   int i=0, j=0;

   /* Zuerst werden die Variablen/Werte-Paare anhand des Zeichens
    * '&' getrennt, sofern es mehrere sind. */
    //s=str_;
char *s=(char*) malloc(strlen(str_) * sizeof(char));

strcpy(s, str_);
    res=strtok(s,"&");
    for(i=0; res!=NULL; i++) {
               printf("\n%d\n", i);
       /* Wert von res dynamisch in char **pair speichern */
       paare[i] = (char *)malloc(strlen(res)* sizeof(char));

       if(paare[i] == 0){
          return 0;
       }
       paare[i] = res;
       res=strtok(0,"&");
    }

        string_1=paare[0];
        res_=strtok(paare[0],"=");
                printf("%s", res_);
char *s_[255];
int x_=0;
int paare_len=(sizeof(paare)/sizeof(char *)/5);
int s__len=(sizeof(s_)/sizeof(char *)/5);
printf("%d,\n%d", paare_len, s__len);
while((sizeof(s_)/sizeof(char *)/5)!=(sizeof(paare)/sizeof(char *)/5)){
    printf("%d\n", x_);
    s_[x_]=(char*) malloc(strlen(str_) * sizeof(char));
    s_[x_]=(char*) malloc(strlen(str_) * sizeof(char));
    if(x_==1){
    return 0;
    }
    x_++;
strcpy(s_[x_], paare[x_]);
}

    for(i_=1; i_<2; i_++) {


        string_1=paare[i_];
                                        paare_[i_][0] = (char *)malloc(strlen(res_)* sizeof(char));
                                        paare_[i_][1] = (char *)malloc(strlen(res_)* sizeof(char));
        if(paare_[i_][0] == 0){
            return 0;
        }else{
            paare_[i_][0]=res_;
        }
        if(paare_[i_][1] == 0){
            return 0;
        }else{
            paare_[i_][1]=string_1;
       }
       res_=strtok(string_1, "=");
           }
    return EXIT_SUCCESS;
}

int main()
{
    printf("Hello world!\n");
    parser("method=normal&action=post");
    return 0;
}
