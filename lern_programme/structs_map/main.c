#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "structs.c"
#include "funcs.h"
//#include "loader.h"
//#include "writer.h"
//#include "vars.h"
#define field_a  4
#define field_b 1024
#define field_c 1000
#define ROWLEN 20
//char puffer_[field_c];
char puffer_[field_c];
int field[field_a][field_b][field_c], setpoint, player[field_a][field_b][field_c];
int a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p, q, r, s, t, u, v, w, x, y, z, word, string, counter_putintable, column, column_, row, lastrow = -1, row_, lastrowx, mode, limiter, limiter_, limiter_column/*, puffer_*/, check;
char character[1], character__[sizeof(field_c)];
char character_, file_;
char content[field_c];
char *zero = "13";
//char *puffer_[20];
struct index lib;
FILE *file;
char puffer[ROWLEN], puffer__[ROWLEN];




int saver(char *file_);
int loader(char *file_);
int from_where(char *search);
int putintable(char *character_, int *column, int *row/*, int player[4][64][100]*/);
int putintable_inlast(char *content, int column_);
int print_field(int field[field_a][field_b][field_c], int mode, int limiter_row, int limiter_column, int limiter_);

int main(int argc, char *argv[])
{
    /*if(argc < 2) {
      printf("Usage : %s [file_to_open]\n", *argv);
      return EXIT_FAILURE;
   }*/
   //Init!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
    printf("Hello world!\n");
    for(i=0; i<field_a; i++) {
        for(j=0; j<field_b; j++){
            for(k=0; k<field_c; k++){
                field[i][j][k] = CharToInt("");
                //printf("%i", CharToInt(""));
            }
        }
    }
//Init Bereich!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
    //loader(argv[1]);
    //field[2][0][0]=24;
    //field[2][0][1]=49;
    //field[2][0][2]=60;
    //field[2][0][3]=60;
    //field[2][0][4]=63;
        //print_field(field);
        //printf("%i", CharToInt("h"));
        //printf("%i", CharToInt("x"));
        int bla=0;
        //int bla_=0;
        ////////int bla__=1;
        ////////putintable("Hallo", &bla, &bla_);
        ////////putintable("abc", &bla, &bla__);
        putintable_inlast("Halloxxxx", bla);
        ////////putintable_inlast("xxx", bla);
        //char *xd= "/home/llxp/Programme/lern_programme/structs_map/bin/Debug/test01.txt";
        loader(argv[1]);

        //int xxx=3;
        print_field(field, 0, atoi(argv[2]), 4, 1000);
                saver(argv[3]);
        //print_field(field, 3, field_a, field_b, field_c);
        //printf("%i", CharToInt("\n"));
    return 0;
}

//Saver teil_Beginn
int saver(char *file_){
                            file=fopen(file_, "a+");
                    if(NULL!=file){
                     for(a=0; a<field_a; a++) {
                         for(b=0; b<field_b; b++) {
                             for(c=0; c<field_c; c++) {
                                 if(field[a][b][c] != 3000){
                                      if(field[a][b][c] != CharToInt("\n")){
                                           fprintf(file, "%i", (field[a][b][c]));
                                      }else{
                                          fprintf(file, "%i", CharToInt(""));
                                      }
                                 }
                             }
                         }
                     }
                    }

    return 0;
}
//Saver Teil
//Loader Teil_Beginn
int loader(char *file_){
    //char *tempString;
    // tempString = (char*) malloc(strlen(puffer)*2* sizeof(char));
    /*    if(tempString== NULL){
            printf("xd, %s", tempString);
                        return 0;*/
                   // }
//int check = 0;
strcpy(puffer_, "\0");
//    if(argc==1){
        file = fopen(file_, "r");
        if(NULL!=file){
            printf("opening: '%s' to read: \n\n", file_);
            while(fgets(puffer, field_c, file)!=0)
    {
        if(strstr(puffer, "\n")==NULL){
            //if(strstr(puffer, "")){
            sprintf(puffer_, "%c", atoi(puffer));
            /*}
            if(check != 10){
                printf("%s", puffer_);
                check++;
            }*/
            printf("%s", puffer_);
            //printf("xD");
            //if(check == 0){
              //  strcpy(puffer_, puffer);
                //check = 1;
            //}else{
            strcat(puffer_, puffer);
            //}
            //printf("\n%s\n", (puffer_));
        }else{
            sprintf(puffer__, "%c", atoi(puffer));
            strcat(puffer_, puffer__);
           // printf("xd");
            //puffer_[field_c-1] = "\0";
            //sprintf(puffer_, "\0");
            //printf("\n%s\n\n", puffer_);
            putintable_inlast(puffer_, 0);
   //         putintable_inlast("HALLO", 0);
            strcpy(puffer_, "\0");
            //puffer_ = "\0";
            //printf("\n%s\n\n", puffer_);
            //free(tempString);
                        //free(puffer_);
            //check = 0;
        }
        strcpy(puffer_, "\0");
    }
            fclose(file);
        }else{
             printf("File not found\n");
            return EXIT_FAILURE;
        }

  //  }
  return EXIT_SUCCESS;

}
//Loader Teil
//Abfragen Teil_Beginn
int from_where(char *search){
    return 0;
}
//Abfragen Teil


//Writer Teil_Beginn
int putintable(char *character_, int *column, int *row/*, int player[4][64][100]*/){
    for(counter_putintable=0; counter_putintable<strlen(character_); counter_putintable++){
       //printf("%i", CharToInt(&character_[counter_putintable]));
       /*if(strcmp(&character_[counter_putintable], zero)==NULL){
           field[*column][*row][counter_putintable] = ZeroToInt(&character_[counter_putintable]);
           lastrow=*row;
       }else{*/
      field[*column][*row][counter_putintable] = CharToInt(&character_[counter_putintable]);
      lastrow=*row;
      /*field[*column][*row][(sizeof(field[*column][*row])-counter_putintable)] = 1;*/
       //printf("%s", character_);
       ////////}
    }
    //printf("%s", character_);
    return 0;
}
int putintable_inlast(char *content, int column_){
    /*for(q=0; q<4; q++){
        for(r=0; r<512; r++){*/
                    row_=lastrow+1;
        ////////printf("xxx%ixxx", row_);
            putintable(content, &column_, &row_);
            //if(field[q][r][s]);
       /* }
    }*/

return 0;
}
// Writer Teil

//Ausgabe Teil_Beginn
int print_field(int field[field_a][field_b][field_c], int mode, int limiter_row, int limiter_column, int limiter_){
    if(mode == 0){
        for(x=0; x<limiter_column; x++) {
            printf("%i.Spalte:\n", x+1);
            for(y=0; y<limiter_row; y++) {
                printf("  %i. Reihe: ", y+1);
                for(word=0; word<limiter_; word++){
                    if(field[x][y][word] != 3000){
             //           if(field[x][y][word] != 0.1){
                            if(field[x][y][word] != CharToInt("\n")){
                                printf("%c", IntToChar(field[x][y][word])/*((field[x][y])+48)*/);
                                /*printf("%c", ((field[x][y])+48));*/
                            /*}else{
                                //printf();
                            }*/
                        }
                    }else{
                        // printf("%c", IntToChar(field[x][y][word])/*((field[x][y])+48));
                        printf("\r");
                    }
                    if(word+1==limiter_){
                        printf("\n");
                    }
                }
                if((y+1)%limiter_row==0){
                    printf("\n\n");
                }
                //printf("");
            }
            /*if(x%8<=0){
                printf("\n");
                printf("%i ", field[x]);
            }else{
                printf("%i ", field[x]);
            }*/
        }
    }else{
        if(mode==1){
            for(x=0; x<field_a; x++) {
                printf("%i.Spalte:\n", x+1);
                for(y=0; y<field_b; y++) {
                    printf("  %i. Reihe: ", y+1);
                    for(word=0; word<field_c; word++){
                        if(field[x][y][word] != 0){
                            //if(field[x][y][word] != 0.1){
                            if(field[x][y][word] != CharToInt("\n")){
                                printf("%c", IntToChar(field[x][y][word])/*((field[x][y])+48)*/);
                                /*printf("%c", ((field[x][y])+48));*/
                            }else{
                                printf("\r");
                            }
                        }else{
                            // printf("%c", IntToChar(field[x][y][word])/*((field[x][y])+48)*/);
                            printf("\r");
                        }
                    //}
                    if(word+1==field_c){
                        printf("\n");
                    }
                }
                if((y+1)%field_b==0){
                    //printf("\n");
                    }
                    //printf("");
                }
                /*if(x%8<=0){
                    printf("\n");
                    printf("%i ", field[x]);
                }else{
                    printf("%i ", field[x]);
                }*/
            }
            //return 0;
        }else{
            if(mode == 2){
                for(x=0; x<limiter_column; x++) {
                    printf("%i.Spalte:\n", x+1);
                    for(y=0; y<limiter_row; y++) {
                        printf("  %i. Reihe: ", y+1);
                        for(word=0; word<limiter_; word++){
                            printf("%i", field[x][y][word]);
                            }
                        }
                    }
                }else{
                if(mode==3){
                }
            }
            }
    }
    return 0;
}
//Ausgabe Teil

//ROWLEN Dynamisch definieren lassen, wenn kein "\n" gefunden wurde den nächsten string/Reihe untersuchen und hintendranhängen wieder hintendranhängen, wenn ein "\n" gefunden wurde, den darauffolgenden string in die nächste zeile einfügen
