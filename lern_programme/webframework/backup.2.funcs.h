extern int field[field_a][field_b][field_c], setpoint, player[field_a][field_b][field_c];
extern int a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p, q, r, s, t, u, v, w, x, y, z, word, string, counter_putintable, column, column_, row_pit, row_, lastrowx, mode, limiter, limiter_, limiter_column/*, puffer_*/, check, lastrow;
//extern char character[1], character__[sizeof(field_c)], character_, file_, content[field_c], puffer[ROWLEN], puffer__[ROWLEN], puffer_[field_c];
extern FILE *file;
extern char *zero;
extern char *ausgabe_string, *ausgabe_content;

//Funktiosübersicht
char convert(char *hex);
void hex2ascii(char *str);
char * cut_string(char *search_c, char *string_c);
char * stringReplace(char *search, char *replace, char *string);
char *Strdup(const char *str) ;
int saver(char *file_);
int loader(char *file_);
int from_where(char *search);
int putintable(char *character_, int *column, int *row_pit/*, int player[4][64][100]*/);
int putintable_inlast(char *content, int column_);
int print_field(int field[field_a][field_b][field_c], int mode, int limiter_row, int limiter_column, int limiter_);
int init(void);
extern unsigned long size;
extern char _GET[][20][20];
extern char _POST[][20][20];
extern int _POST_length;
extern int _GET_length;
//Funktionsübersicht


char *parse_content(char *content, char *gap_allocate, char *gap_gap, int switcher){
//    char *$_GET_="";
//char *$_GET=(char *)calloc(20, 20 * sizeof(char));
    int parse_counter;
    char *string_b, *string_c, *string_d;
    char *string_a=(char*) malloc(strlen(content) * sizeof(char));                  //Backup-Kopie
    strcpy(string_a, content);                                                      //Backup-Kopie
    //string_b=(char*) malloc(strlen(content) * sizeof(char));
    string_d=(char*) malloc(strlen(content) * sizeof(char));
    strcpy(string_d, string_a);
    if(strstr(string_d, "ll")!=0){
               goto exit__;
               }
    for(parse_counter=0; parse_counter<20; parse_counter++){

        //$_GET[parse_counter]=(char *)calloc(10, 20 * sizeof(char));
        //printf("string_d_%i:%s\n", parse_counter, string_d);
        string_b=(char*) malloc(strlen(string_d) * sizeof(char));
        string_c=(char*) malloc(strlen(string_d) * sizeof(char));
        strcpy(string_b, string_d);

        //parse_find=0;
        //parse_find=strcspn(string_b, "=");
        //string_b[parse_find]='\0';
        ausgabe_string=cut_string(gap_allocate, string_b);
        ////////////////printf("Variable_%i:%s\n", parse_counter+1, ausgabe_string);                //Ausgabe der (ersten) Variable     später zuordung mit strcpy(ausgabe_string, string_b) bzw. einfügen in ein char array
        if(switcher==0){
        sprintf(_GET[parse_counter][0], "%s",ausgabe_string);                       //Den Variablennamen der Get variable in den _GET[][20][20] array kopieren
        }else{
            sprintf(_POST[parse_counter][0], "%s",ausgabe_string);                       //Den Variablennamen der Get variable in den _GET[][20][20] array kopieren
        }
       // $_GET[parse_counter][0]=$_GET_;
        //string_c=(char *) malloc(size+1);

        strcpy(string_c, string_d);
        stringReplace(ausgabe_string, "", string_c);
        //printf("1.:%s\n", string_c);
        stringReplace(gap_allocate, "", string_c);
        strcpy(string_d, string_c);
        //printf("2.:%s\n", string_c);
        ausgabe_content=cut_string(gap_gap, string_c);
        ////////////////printf("Inhalt:%s\n\n", ausgabe_content);
        stringReplace(ausgabe_content, "", string_d);
        stringReplace(gap_gap, "", string_d);
        if(switcher==0){
            if(strstr(_GET[parse_counter][1], "ll")!=0){
               return 0;
               }
            //hex2ascii(ausgabe_content);
            sprintf(_GET[parse_counter][1], "%s",ausgabe_content);                      //Den Content der Get variable in den _GET[][20][20] array kopieren
        }else{
            if(strstr(_GET[parse_counter][1], "ll")){
               return 0;
               }
            //hex2ascii(ausgabe_content);
            sprintf(_POST[parse_counter][1], "%s",ausgabe_content);                      //Den Content der Get variable in den _GET[][20][20] array kopieren
        }

        //printf("xyz:%s\n\n", string_d);
/*
        strcpy(content, stringReplace(cut_string("=", content_cpy_), "", content_cpy__));
        printf("1.%s\n", content);
        strcpy(content, stringReplace("=", "", content));
        strcpy(content_c, stringReplace(cut_string("&&", content_cpy__), "", content));
        printf("2.%s\n", content_c);*/
   //     free(string_b);
   //     free(string_c);
   //     free(string_d);

      /*  if(strcmp(content, "")){
            free(content_cpy_);
            free(content_cpy__);
            if(switcher==0){
                return content;
            }
        }else{
            printf("%d\n", parse_find);
        }*/
        //printf("%s", $_GET[0]);
exit__:        if(string_c!=NULL){
        free(string_c);
        }
        if(string_b!=NULL){
            free(string_b);
        }
    }//Schleifen schluss
    if(string_a!=NULL){
        free(string_a);
        }
        if(string_d!=NULL){
        free(string_d);
        }

    //    free(string_d);
    //    free(string_a);
    //printf("%d", _POST_length);
    return EXIT_SUCCESS;
}
/* Wandelt einzelne Hexzeichen (%xx) in ASCII-Zeichen
 * und kodierte Leerzeichen (+) in echte Leerzeichen um. */
void hex2ascii(char *str)  {
   int x, y;


   for(x=0,y=0; str[y] != '\0'; ++x,++y) {
      str[x] = str[y];
      /* Ein hexadezimales Zeichen? */
      if(str[x] == '%')  {
         str[x] = convert(&str[y+1]);
         y += 2;
      }
      /* Ein Leerzeichen? */
      else if( str[x] == '+')
         str[x]=' ';
   }
   /* geparsten String sauber terminieren */
   str[x] = '\0';
}

/* Funktion konvertiert einen String von zwei hexadezimalen
 * Zeichen und gibt das einzelne dafür stehende Zeichen zurück. */
char convert(char *hex) {
   char ascii;

   /* erster Hexawert */
   ascii =
   (hex[0] >= 'A' ? ((hex[0] & 0xdf) - 'A')+10 : (hex[0] - '0'));

   ascii <<= 4; /* Bitverschiebung schneller als ascii*=16 */
   /* zweiter Hexawert */
   ascii +=
   (hex[1] >= 'A' ? ((hex[1] & 0xdf) - 'A')+10 : (hex[1] - '0'));
   return ascii;
}
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

char * stringReplace(char *search, char *replace, char *string) {
	char *tempString, *searchStart;
	int len=0;


	// preuefe ob Such-String vorhanden ist
	searchStart = strstr(string, search);
	if(searchStart == NULL) {
		return string;
	}

	// Speicher reservieren
	tempString = (char*) malloc(strlen(string) * sizeof(char));
	if(tempString == NULL) {
		return NULL;
	}

	// temporaere Kopie anlegen
	strcpy(tempString, string);

	// ersten Abschnitt in String setzen
	len = searchStart - string;
	string[len] = '\0';

	// zweiten Abschnitt anhaengen
	strcat(string, replace);

	// dritten Abschnitt anhaengen
	len += strlen(search);
	strcat(string, (char*)tempString+len);

	// Speicher freigeben
	free(tempString);

	return string;
}

char *Strdup(const char *str) {
   char *p;

   if(NULL == str)
      return NULL;
   else {
      p = malloc(strlen(str)+1);
      if(NULL == p)
         return NULL;
      else
         strcpy(p, str);
   }
   return p;
}

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
int CharToInt(char *character)
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
/*
//Hier ist noch ein Fehler vorhanden: "Falscher Aufruf von fgets_chk
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
}*/

int from_where(char *search){
    return 0;
}

int putintable(char *character_, int *column, int *row_pit){
    for(counter_putintable=0; counter_putintable<strlen(character_); counter_putintable++){
        field[*column][*row_pit][counter_putintable] = CharToInt(&character_[counter_putintable]);
        lastrow=*row_pit;
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
