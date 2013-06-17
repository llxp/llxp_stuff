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
int field[field_a][field_b][field_c], setpoint, player[field_a][field_b][field_c];
int a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p, q, r, s, t, u, v, w, x, y, z, word, string, counter_putintable, column, column_, row, lastrow = -1, row_, lastrowx, mode, limiter, limiter_, limiter_column, puffer_;
char character[1];
char character_, file_;
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

int main(int argc, char *argv[])
{
    printf("Hello world!\n");
    file = fopen(argv[1], "a+");
    //if(NULL!=file){
    //    printf("opening: '%s' to read: \n\n", argv[1]);
    for(a=0;a<256;a++){
        for(b=0;b<256;b++){
            for(c=0;c<256;c++){
                for(d=0;d<256;d++){
                    for(e=0;e<256;e++){
                        for(f=0;f<256;f++){
                            for(g=0;g<256;g++){
                                for(h=0;h<256;h++){
                                    for(i=0;i<256;i++){
                                        for(j=0;j<256;j++){
                                            for(k=0;k<256;k++){
                                                for(l=0;l<256;l++){
                                                    for(m=0;m<256;m++){
                                                        for(n=0;n<256;n++){
                                                            for(o=0;o<256;o++){
                                                                for(p=0;p<256;p++){
                                                                    for(q=0;q<256;q++){
                                                                        for(r=0;r<256;r++){
                                                                            for(s=0;s<256;s++){
                                                                                for(t=0;t<256;t++){
                                                                                    for(u=0;u<256;u++){
                                                                                        for(v=0;v<256;v++){
                                                                                            for(w=0;w<256;w++){
                                                                                                for(x=0;x<256;x++){
                                                                                                    for(y=0;y<256;y++){
                                                                                                        for(z=0;z<256;z++){
                                                                                                            fprintf(file, "%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n", IntToChar(a),IntToChar(b),IntToChar(c),IntToChar(d),IntToChar(e),IntToChar(f),IntToChar(g),IntToChar(h),IntToChar(i),IntToChar(j),IntToChar(k),IntToChar(l),IntToChar(m),IntToChar(n),IntToChar(o),IntToChar(p),IntToChar(q),IntToChar(r),IntToChar(s),IntToChar(t),IntToChar(u),IntToChar(v),IntToChar(w),IntToChar(x),IntToChar(y),z);
                                                                                                            //strcpy(character_, file_);
                                                                                                            //fprintf(file, "%s", &file_);
                                                                                                            if(x==20){
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
