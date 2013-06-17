extern int field[field_a][field_b][field_c], setpoint, player[field_a][field_b][field_c];
extern int a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p, q, r, s, t, u, v, w, x, y, z, word, string, counter_putintable, column, column_, row_pit, row_, lastrowx, mode, limiter, limiter_, limiter_column/*, puffer_*/, check, lastrow;
//extern char character[1], character__[sizeof(field_c)], character_, file_, content[field_c], puffer[ROWLEN], puffer__[ROWLEN], puffer_[field_c];
extern FILE *file;
extern char *zero;
extern char *ausgabe_string, *ausgabe_content;
#define MAX_PAARE 255
//Funktiosübersicht
char *parser_get(char *str_get);
char *parse_content(char *content, char *gap_allocate, char *gap_gap, char *request_method);
char *getdata();
char *getdata_force(char *method);
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
extern char *_retarr[][20][20];
extern char *_GET[255][2];
extern char *_POST[255][2];
extern int _POST_length;
extern int _GET_length;
//Funktionsübersicht


struct CGI_DATEN {
   char *variable;
   char *wert;
   struct CGI_DATEN *next;
};

struct CGI_DATEN *ende = NULL;

char *parser(char *str_) {
   //char *s="";
   char* res="";
   char* res_="";
//   char* string_1="";
   char *s_[255];
//int x_=0;
   int i_=0;//, fc;
   /* Irgendwo gibt es auch eine Grenze, hier sind
      MAX_PAARE erlaubt. */
    char *paare[255];
    //char *_GET[255][2];
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
               //printf("\n%d\n", i);
       /* Wert von res dynamisch in char **pair speichern */
       paare[i] = (char *)malloc(strlen(res)* sizeof(char));
       s_[i] = (char *)malloc(strlen(res)* sizeof(char));
       if(paare[i] == NULL){
          return 0;
       }
       strcpy(paare[i], res);
       strcpy(s_[i], res);
       res=strtok(0,"&");
       res_=strtok(s_[i],"=");
       for(i_=0; res_!=NULL; i_++){
           _GET[i][i_] = (char *)malloc(strlen(res_)* sizeof(char));
           hex2ascii(res_);
           strcpy(_GET[i][i_], res_);
           res_=strtok(0,"=");


           //strcpy(paare_[i][i_], res_);
       }
    }
    //printf("%s", s_[1]);
    //printf("%s", _GET[0][1]);
//int paare_len=(sizeof(paare)/sizeof(char *)/5);
//printf("%d", paare_len);
//printf("%d", sizeof(paare[2]));
/*while(1){
    //printf("%s", paare[1]);
    //printf("!%s\n", paare[i_]);
    //if(strlen(paare[1])==0){
    //printf("hallo!hallo\n");}
    if(paare[i_]==NULL){
        return 0;
    }else{
        printf("%s", paare[i_]);
    }
    i_++;
}
*/
/*
while(1){
    s_[x_]=(char*) malloc(strlen(paare[x_]) * sizeof(char));
    strcpy(s_[x_], paare[x_]);
    x_++;
    if(paare[x_]==0){
    printf("\n!!!%s!!!\n", s_[1]);
    goto weiter;
    }
}

weiter:
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
           if(s_!=NULL){
               for(fc=0; s_[fc]==NULL; fc++){
           free(s_[fc]);
           free(paare[fc]);
               }
           }*/
    return EXIT_SUCCESS;
}

/*char *parse_content(char *content, char *gap_allocate, char *gap_gap, char *request_method){       //content=der zu verarbeitende input_query, gap_allocate=Abtrennzeichen bzw. Zuordnungszeichen von variablennamen zu variablenwert, gap_gap=Abtrennzeichen zwischen den einzelnen variablennamen
    int parse_counter;
    char *string_b, *string_c, *string_d;
    char *string_a=(char*) malloc(strlen(content) * sizeof(char));                  //Backup-Kopie
    strcpy(string_a, content);                                                      //Backup-Kopie
    //string_b=(char*) malloc(strlen(content) * sizeof(char));
    string_d=(char*) malloc(strlen(content) * sizeof(char));
    strcpy(string_d, string_a);
    for(parse_counter=0; parse_counter<20; parse_counter++){
        string_b=(char*) malloc(strlen(string_d) * sizeof(char));
        string_c=(char*) malloc(strlen(string_d) * sizeof(char));
        strcpy(string_b, string_d);
        ausgabe_string=cut_string(gap_allocate, string_b);

        if(strcmp(request_method, "GET")==0){
            sprintf(_GET[parse_counter][0], "%s",ausgabe_string);                       //Den Variablennamen der Get variable in den _GET[][20][20] array kopieren
        }
        else if(strcmp(request_method, "POST")==0){
            sprintf(_POST[parse_counter][0], "%s",ausgabe_string);                       //Den Variablennamen der Get variable in den _GET[][20][20] array kopieren
        }
        strcpy(string_c, string_d);
        stringReplace(ausgabe_string, "", string_c);
        stringReplace(gap_allocate, "", string_c);
        strcpy(string_d, string_c);
        ausgabe_content=cut_string(gap_gap, string_c);
        stringReplace(ausgabe_content, "", string_d);
        stringReplace(gap_gap, "", string_d);
        if(strcmp(request_method, "GET")==0){
            sprintf(_GET[parse_counter][1], "%s",ausgabe_content);                      //Den Content der Get variable in den _GET[][20][20] array kopieren
        }else if(strcmp(request_method, "POST")==0){
            sprintf(_POST[parse_counter][1], "%s",ausgabe_content);                      //Den Content der Get variable in den _GET[][20][20] array kopieren
        }
        if(string_c!=NULL){
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
        else if(strcmp(request_method, "POST")){
            return 0;
        }else{
            return 0;
        }
    return EXIT_SUCCESS;
}*/
/* Liste aus Variable/Wert-Paaren erstellen
 * Rückgabewert: Anfangsadresse der Liste
 * Bei Fehler: NULL
 */
struct CGI_DATEN *erstellen(char *str) {
   char* s;
   char* res;
   /* Irgendwo gibt es auch eine Grenze, hier sind
      MAX_PAARE erlaubt. */
   char *paare[MAX_PAARE];
   struct CGI_DATEN *ptr_daten = NULL;
   struct CGI_DATEN *ptr_anfang = NULL;
   int i=0, j=0;

   /* Zuerst werden die Variablen/Werte-Paare anhand des Zeichens
    * '&' getrennt, sofern es mehrere sind. */
    s=str;
    res=strtok(s,"&");
    while( res != NULL && i < MAX_PAARE) {
       /* Wert von res dynamisch in char **pair speichern */
       paare[i] = (char *)malloc(strlen(res)+1);
       if(paare[i] == NULL)
          return NULL;
       paare[i] = res;
       res=strtok(NULL,"&");
       i++;
    }


   /* Jetzt werden die Variablen von den Werten getrennt und
    * an die Struktur CGI_DATEN übergeben. */
   while ( i > j )  { /* Das erste Element? */
      if(ptr_anfang == NULL) {
         ptr_anfang =(struct CGI_DATEN *)
           malloc(sizeof (struct CGI_DATEN *));
         if( ptr_anfang == NULL )
            return NULL;
         res = strtok( paare[j], "=");
         if(res == NULL)
            return NULL;
         ptr_anfang->variable = (char *)
           malloc(strlen(res)+1);
         if( ptr_anfang->variable == NULL )
            return NULL;
         ptr_anfang->variable = res;
         res = strtok(NULL, "\0");
         if(res == NULL)
            return NULL;
         ptr_anfang->wert = (char *) malloc(strlen(res)+1);
         if( ptr_anfang->wert == NULL )
            return NULL;
         ptr_anfang->wert = res;
         /* printf("%s %s<br>",
          * ptr_anfang->variable, ptr_anfang->wert); */
         ptr_anfang->next =(struct CGI_DATEN *)
           malloc(sizeof (struct CGI_DATEN *));
         if(ptr_anfang->next == NULL)
            return NULL;
         ptr_daten = ptr_anfang->next;
         j++;
      }
      else { /* die restlichen Elemente */
         res = strtok( paare[j], "=");
         if(res == NULL)
            return NULL;
         ptr_daten->variable =(char *)
           malloc(strlen(res)+1);
         if(ptr_daten->variable == NULL)
            return NULL;
         ptr_daten->variable = res;
         res = strtok(NULL, "\0");
         if(res == NULL)
            return NULL;
         ptr_daten->wert =(char *) malloc(strlen(res)+1);
         if(ptr_daten->wert == NULL)
            return NULL;
         ptr_daten->wert = res;
         /* printf("%s %s<br>",
          * ptr_daten->variable,  ptr_daten->wert); */
         ptr_daten->next = (struct CGI_DATEN *)
           malloc(sizeof (struct CGI_DATEN *));
         if( ptr_daten->next == NULL )
            return NULL;
         ptr_daten = ptr_daten->next;
         j++;
      }
   }
   ende = ptr_daten;
   /* Anfangsadresse der Liste struct CGI_DATEN zurückgeben */
   return ptr_anfang;
}

void loeschen(struct CGI_DATEN *daten) {
   struct CGI_DATEN *next = NULL;

   while(daten != ende) {
      next = daten->next;
      if(daten->variable != NULL)
         free(daten);
      daten=next;
   }
}
char *getdata(void) {
   unsigned long size;
   char *puffer = NULL;
   char *request = getenv("REQUEST_METHOD");
   char *cont_len;
   char *cgi_string;

   /* zuerst die Request-Methode überprüfen */
   if(  NULL == request )
      return NULL;
   else if( strcmp(request, "GET") == 0 ) {
      /* Die Methode GET -> Query-String abholen */
      cgi_string = getenv("QUERY_STRING");
     //printf("%s", cgi_string);
      if( NULL == cgi_string )
         return NULL;
      else {
         puffer = (char *) Strdup(cgi_string);
         return puffer; /* Rückgabewert an den Aufrufer */
      }
   }
   else if( strcmp(request, "POST") == 0 ) {
      /* die Methode POST -> Länge des Strings
       * ermitteln (CONTENT_LENGTH) */
      cont_len = getenv("CONTENT_LENGTH");
      if( NULL == cont_len)
         return NULL;
      else {
         /* String CONTENT_LENGTH in unsigned long umwandeln */
         size = (unsigned long) atoi(cont_len);
         if(size <= 0)
            return NULL; /* Keine Eingabe!?!? */
      }
      /* jetzt lesen wir die Daten von stdin ein */
      puffer =(char *) malloc(size+1);
      if( NULL == puffer )
         return NULL;
      else {
         if( NULL == fgets(puffer, size+1, stdin) ) {
            free(puffer);
            return NULL;
         }
         else  /* Rückgabewerte an den Aufrufer */
            return puffer;
      }
   }

   /* Weder die GET-Methode noch die POST-Methode wurden verwendet. */
   else
      return NULL;
}
char *getdata_force(char *method) {
   unsigned long size;
   char *puffer = NULL;
//   char *request = getenv("REQUEST_METHOD");
   char *cont_len;
   char *cgi_string;

   /* zuerst die Request-Methode überprüfen */
   if(  NULL == method )
      return NULL;
   else if( strcmp(method, "GET") == 0 ) {
      /* Die Methode GET -> Query-String abholen */
      cgi_string = getenv("QUERY_STRING");
     //printf("%s", cgi_string);
      if( NULL == cgi_string )
         return NULL;
      else {
         puffer = (char *) Strdup(cgi_string);
         return puffer; /* Rückgabewert an den Aufrufer */
      }
   }
   else if( strcmp(method, "POST") == 0 ) {
      /* die Methode POST -> Länge des Strings
       * ermitteln (CONTENT_LENGTH) */
      cont_len = getenv("CONTENT_LENGTH");
      if( NULL == cont_len)
         return NULL;
      else {
         /* String CONTENT_LENGTH in unsigned long umwandeln */
         size = (unsigned long) atoi(cont_len);
         if(size <= 0)
            return NULL; /* Keine Eingabe!?!? */
      }
      /* jetzt lesen wir die Daten von stdin ein */
      puffer =(char *) malloc(size+1);
      if( NULL == puffer )
         return NULL;
      else {
         if( NULL == fgets(puffer, size+1, stdin) ) {
            free(puffer);
            return NULL;
         }
         else  /* Rückgabewerte an den Aufrufer */
            return puffer;
      }
   }

   /* Weder die GET-Methode noch die POST-Methode wurden verwendet. */
   else
      return NULL;
return 0;
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

