#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "structs.c"
#include "funcs.h"
//#include "funcs.c"
#define field_a  4
#define field_b 512
#define field_c 1000
#define ZEILENLAENGE 80
int field[field_a][field_b][field_c], setpoint, player[field_a][field_b][field_c];
int a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p, q, r, s, t, u, v, w, x, y, z, word, string, counter_putintable, column, column_, row, lastrow, row_, lastrowx, mode, limiter, limiter_, limiter_column;
char character[1];
char character_, file_;
char content[field_c];
struct index lib;
FILE *file;
char puffer[ZEILENLAENGE];
//int print_field(int *field);

char IntToChar(int integer)
{
return (char)integer+48;
}
//Hier weiterarbeiten
int CharToInt(char *character/*, int player[4][64][100]*/)
{
    //return (int) character;
    //character_[1];
    int string = (int) character[0];
//   sprintf(character_, "%i", character[0]);
    //printf("%i", string);//sprintf(string, "%d", character);
    //return 0;
return string-48;
}//Hier Weiterarbeiten

int putintable(char *character_, int *column, int *row/*, int player[4][64][100]*/){
    for(counter_putintable=0; counter_putintable<strlen(character_); counter_putintable++){
       //printf("%i", CharToInt(&character_[counter_putintable]));
      field[*column][*row][counter_putintable] = CharToInt(&character_[counter_putintable]);
      lastrow=*row;
      /*field[*column][*row][(sizeof(field[*column][*row])-counter_putintable)] = 1;*/
       //printf("%s", character_);
    }
    //printf("%s", character_);
    return 0;
}
int print_field(int field[field_a][field_b][field_c], int mode, int limiter_row, int limiter_column, int limiter_){
    if(mode == 0){
        for(x=0; x<limiter_column; x++) {
            printf("%i.Spalte:\n", x+1);
            for(y=0; y<limiter_row; y++) {
                printf("  %i. Reihe: ", y+1);
                for(word=0; word<limiter_; word++){
                    if(field[x][y][word] != 0){
                        if(field[x][y][word] != CharToInt("\n")){
                        printf("%c", IntToChar(field[x][y][word])/*((field[x][y])+48)*/);
                        /*printf("%c", ((field[x][y])+48));*/
                        }else{
                            printf("  ");
                        }
                        }else{
                            // printf("%c", IntToChar(field[x][y][word])/*((field[x][y])+48)*/);
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
        }
        else{
            if(mode==1){
                for(x=0; x<field_a; x++) {
            printf("%i.Spalte:\n", x+1);
            for(y=0; y<field_b; y++) {
                printf("  %i. Reihe: ", y+1);
                for(word=0; word<field_c; word++){
                    if(field[x][y][word] != 0){
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
                        if(word+1==field_c){
                            printf("\n");
                        }
                    }
                    if((y+1)%field_b==0){
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
                //return 0;
            }
        }
    return 0;
}
int putintable_inlast(char *content, int column_){
    /*for(q=0; q<4; q++){
        for(r=0; r<512; r++){*/
        row_=lastrow+1;
            putintable(content, &column_, &row_);
            if(field[q][r][s]);
       /* }
    }*/
return 0;
}

int from_where(char *search){
    return 0;
}
int loader(char *file_){
//    if(argc==1){
        file = fopen(file_, "r");
        if(NULL!=file){
            //printf("opening: '%s' to read: \n\n", file_);
            while(fgets(puffer, 10, file))
    {
        //printf("line: %s", puffer);
        putintable_inlast(puffer, 0);
    }
            fclose(file);
        }else{
             printf("File not found\n");
            return EXIT_FAILURE;
        }

  //  }
  return EXIT_SUCCESS;

}
int main(int argc, char *argv[])
{
    if(argc < 2) {
      printf("Usage : %s [file_to_open]\n", *argv);
      return EXIT_FAILURE;
   }
    printf("Hello world!\n");
    for(i=0; i<field_a; i++) {
        for(j=0; j<field_b; j++){
            for(k=0; k<field_c; k++){
                field[i][j][k] = '\0';
            }
        }
    }
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
        int bla_=0;
        //int bla__=1;
        putintable("Hallo", &bla, &bla_);
        //putintable("abc", &bla, &bla__);
        putintable_inlast("Halloxxxx", bla);
        putintable_inlast("xxx", bla);
        loader(argv[1]);
        //int xxx=3;
        print_field(field, 0, 10, 4, 500);
        printf("%i", CharToInt("\n"));
    return 0;
}

