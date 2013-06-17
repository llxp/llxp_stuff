#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//#include "structs.c"
//#include "funcs.h"
//#include "funcs.c"
#define field_a  4
#define field_b 1024
#define field_c 1000
#define ROWLEN 200
#define BUF 26
int field[field_a][field_b][field_c], setpoint, player[field_a][field_b][field_c];
int a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p, q, r, s, t, u, v, w, x, y, z, word, string, counter_putintable, column, column_, row, lastrow = -1, row_, lastrowx, mode, limiter, limiter_, limiter_column, puffer_;
char character[1];
char character_, file_[BUF];
char content[field_c];
char *zero = "13";
//struct index lib;
FILE *file;
char puffer[ROWLEN], puffer__[ROWLEN];
//int print_field(int *field);

char IntToChar(int integer)
{
return (char)(integer+48);
}
//Hier weiterarbeiten
int CharToInt(char *character/*, int player[4][64][100]*/)
{
    /*if(strstr(&character[0], "0")){
        int string = (int) character[0]+300;
        return string-48;
    }else{*/
    //return (int) character;
    //character_[1];
    //for(w=0;w<3;w++){
        int string = (int) character[w];
    //}
//   sprintf(character_, "%i", character[0]);
    //printf("%i", string);//sprintf(string, "%d", character);
    //return 0;
    return string-48;
    //}
}//Hier Weiterarbeiten
int ZeroCheck(int zero){
    if(zero!=0){
        return zero;
    }
    return 0;
}
char *kill_the_nulls (char *s)
{
    while (*s && *s == '0')
        s++;
    return s;
}
int main(int argc, char *argv[])
{
    printf("Hello world!\n");
    file = fopen("xd.lst", "a+");
    //if(NULL!=file){
    //    printf("opening: '%s' to read: \n\n", argv[1]);
    for(a=0;a<10;a++){
        for(b=0;b<10;b++){
            for(c=0;c<10;c++){
                for(d=0;d<10;d++){
                    for(e=0;e<10;e++){
                        for(f=0;f<10;f++){
                            for(g=0;g<10;g++){
                                for(h=0;h<10;h++){
                                    for(i=0;i<10;i++){
                                        for(j=0;j<10;j++){
                                            for(k=0;k<10;k++){
                                                for(l=0;l<10;l++){
                                                    for(m=0;m<10;m++){
                                                        for(n=0;n<10;n++){
                                                            for(o=0;o<10;o++){
                                                                for(p=0;p<10;p++){
                                                                    for(q=0;q<10;q++){
                                                                        for(r=0;r<10;r++){
                                                                            for(s=0;s<10;s++){
                                                                                for(t=0;t<10;t++){
                                                                                    for(u=0;u<10;u++){
                                                                                        for(v=0;v<10;v++){
                                                                                            for(w=0;w<10;w++){
                                                                                                for(x=0;x<10;x++){
                                                                                                    for(y=0;y<10;y++){
                                                                                                        for(z=0;z<10;z++){
                                                                                                            //file_ = malloc(sizeof *file_);
                                                                                                            sprintf(file_, "%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d\n", a,b,c,(d),(e),(f),(g),(h),(i),(j),(k),(l),(m),(n),(o),(p),(q),(r),(s),(t),(u),(v),(w),(x),(y),(z));
                                                                                                            /*while(strstr(file_[0], "0"){
                                                                                                                  file_[0] = '\0';
                                                                                                                  }*/
                                                                                                                  //free(file_);

                                                                                                            //strcpy(character_, file_);
                                                                                                            fprintf(file, "%s", kill_the_nulls(file_));
                                                                                                            char file_[BUF] = "0";
                                                                                                            if(s==1){
                                                                                                                return 0;
                                                                                                            }
                                                                                                        }
                                                                                                    }
                                                                                                }
                                                                                            }
                                                                                        }
                                                                                    }
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
  //  }
    return 0;
}
