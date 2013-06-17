extern int field[field_a][field_b][field_c], setpoint, player[field_a][field_b][field_c];
extern int a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p, q, r, s, t, u, v, w, x, y, z, word, string, counter_putintable, column, column_, row, row_, lastrowx, mode, limiter, limiter_, limiter_column/*, puffer_*/, check, lastrow;
extern char character[1], character__[sizeof(field_c)], character_, file_, content[field_c], puffer[ROWLEN], puffer__[ROWLEN], puffer_[field_c];
extern FILE *file;
extern char *zero;


//Funktiosübersicht
int saver(char *file_);
int loader(char *file_);
int from_where(char *search);
int putintable(char *character_, int *column, int *row/*, int player[4][64][100]*/);
int putintable_inlast(char *content, int column_);
int print_field(int field[field_a][field_b][field_c], int mode, int limiter_row, int limiter_column, int limiter_);
int init(void);
//Funktionsübersicht



char *kill_the_nulls (char *s)
{
    while (*s && *s == '0')
        s++;
    return s;
}
char IntToChar(int integer)
{
return (char)integer+48;
}
int CharToInt(char *character/*, int player[4][64][100]*/)
{    int string = (int) character[0];
return string-48;
}

int init(void){
    int i, j, k;
    for(i=0; i<field_a; i++) {
        for(j=0; j<field_b; j++){
            for(k=0; k<field_c; k++){
                field[i][j][k] = CharToInt("");
                //printf("%i", CharToInt(""));
            }
        }
    }
    return 0;
}

int saver(char *file_){
    extern int a,b,c;
    extern FILE *file;
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

int loader(char *file_){
    strcpy(puffer_, "\0");
    file = fopen(file_, "r");
    if(NULL!=file){
        printf("opening: '%s' to read: \n\n", file_);
        while(fgets(puffer, field_c, file)!=0){
            if(strstr(puffer, "\n")==NULL){
                sprintf(puffer_, "%c", atoi(puffer));
                printf("%s", puffer_);
                strcat(puffer_, puffer);
            }
            else{
                sprintf(puffer__, "%c", atoi(puffer));
                strcat(puffer_, puffer__);
                putintable_inlast(puffer_, 0);
                strcpy(puffer_, "\0");
            }
            strcpy(puffer_, "\0");
        }
            fclose(file);
    }
    else{
        printf("File not found\n");
        return EXIT_FAILURE;
    }
    return EXIT_SUCCESS;
}

int from_where(char *search){
    return 0;
}

int putintable(char *character_, int *column, int *row){
    for(counter_putintable=0; counter_putintable<strlen(character_); counter_putintable++){
        field[*column][*row][counter_putintable] = CharToInt(&character_[counter_putintable]);
        lastrow=*row;
    }
    return 0;
}
int putintable_inlast(char *content, int column_){
     row_=lastrow+1;
     putintable(content, &column_, &row_);
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
                            printf("%c", IntToChar(field[x][y][word]));
                        }
                        else{
                            printf("\r");
                        }
                    }
                    else{
                            printf("\r");
                    }
                }
                printf("\n");
            }
            printf("\n");
        }
        printf("\n");
    }
    else{
        if(mode==1){
            for(x=0; x<field_a; x++){
                printf("%i.Spalte:\n", x+1);
                for(y=0; y<field_b; y++) {
                    printf("  %i. Reihe: ", y+1);
                    for(word=0; word<field_c; word++){
                        if(field[x][y][word] != 0){
                            if(field[x][y][word] != CharToInt("\n")){
                                printf("%c", IntToChar(field[x][y][word]));
                            }
                            else{
                                printf("\r");
                            }
                        }
                        else{
                            printf("\r");
                        }
                    }
                    printf("\n");
                }
                printf("\n");
            }
            printf("\n");
        }
        else{
            if(mode == 2){
                for(x=0; x<limiter_column; x++) {
                    printf("%i.Spalte:\n", x+1);
                    for(y=0; y<limiter_row; y++) {
                        printf("  %i. Reihe: ", y+1);
                        for(word=0; word<limiter_; word++){
                            printf("%i", field[x][y][word]);
                        }
                        printf("\n");
                    }
                    printf("\n");
                }
                printf("\n");
            }
            else{
                if(mode==3){
                    return 0;
                }
            }
        }
    }
    return 0;
}

int printlastrow(int rp){
    if(rp==1){
        return lastrow;
    }
    printf("Letzte Hinzugefügte Zeile: %i\n", lastrow);
    return 0;
}
