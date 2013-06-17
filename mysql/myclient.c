/* mysql1.c */
#include <stdio.h>
#include <stdlib.h>
#if defined __WIN32__ || _MSC_VER
   #include "my_global.h"
   #include "mysql.h"
#else
   #include <mysql.h>
#endif
#include <unistd.h>
#include <sys/ioctl.h>
#include <fcntl.h>
//#include <stdlib.h>
#include <linux/cdrom.h>
#include <errno.h>
#include <string.h>

#define DB_HOST "localhost"
#define DB_USER "root"
#define DB_PASSWORD "AdmiN1995"
#define DB_NAME "c-test"

#define malloc(size) \
        malloc(size);\
        if( (size) == NULL)\
           {\
              printf("Kein Speicher mehr ...\n");\
              return;\
           }

MYSQL  *my;
MYSQL *mysql;
  char *auswahl;
  char darsteller[255];
  char *ptr;

void check_error(void)  {
   if (mysql_errno(mysql) != 0) {
      fprintf(stderr, "Fehler: %s\n", mysql_error(mysql));
      exit(EXIT_FAILURE);
   }
}
void verbinden(void)  {
   mysql=mysql_init(mysql);
   check_error();
   mysql_real_connect(mysql, "localhost", "root",
                      NULL, NULL, 0, NULL, 0);
   check_error();
}


void schauspieler_suchen(char *name) {
   unsigned long  anzahl_reihen;
   unsigned int i;
   MYSQL_ROW  row;
   MYSQL_RES  *mysql_res;

   char *query, *string;
   char *select = "SELECT * FROM test_a WHERE id='";
   string = malloc(strlen(name)+2);
   strcpy(string,name);
   strcat(string, "'");
   query = malloc(strlen(select)+strlen(string)+1);
   strcpy(query, select);
   strcat(query, string);

   /* jetzt die Anfrage an den Datenbankserver */
   mysql_real_query(mysql, query, strlen(query));
   check_error();
   /* Daten der Anfrage abholen */
   mysql_res = mysql_store_result(mysql);
   check_error();
   /* Anzahl der gefundenen Datensätze ermitteln */
   anzahl_reihen = (unsigned long) mysql_num_rows (mysql_res);
   printf ("Anzahl gefunden: %lu\n\n", anzahl_reihen);
   /* gefundenen Datensatz bzw. Datensätze ausgeben */
   while ((row = mysql_fetch_row (mysql_res)) != NULL) {
      /* Einzelne Spalten der Zeile ausgeben */
      for (i = 0;  i < mysql_num_fields(mysql_res);  i ++)
         printf ("%s ",row[i]);
      printf("\n");
   }
   /* Speicherplatz wieder freigeben */
   mysql_free_result(mysql_res);
   free(string);
   free(query);
}


void check_error(void);
void verbinden(void);
void verbindung_schliessen(void);
void db_waehlen(char *);
void filmdaten_anfuegen(void);
void filmdaten_loeschen(void);
void filmdaten_aendern(void);
void alle_daten_ausgeben(void);
void schauspieler_suchen(char *);
void print_line(MYSQL_RES *);

int main (int argc, char *argv[]) {

   /* Handle initialisieren */
   my = mysql_init(NULL);

   if(my == NULL) {
      fprintf(stderr, " Initialisierung fehlgeschlagen\n");
      return EXIT_SUCCESS;
   }

   /* mit dem Server verbinden */
   if( mysql_real_connect (
        my,   /* Zeiger auf MYSQL-Handler */
        DB_HOST, /* Host-Name */
        DB_USER, /* User-Name */
        DB_PASSWORD, /* Passwort für user_name */
        DB_NAME,  /* Name der Datenbank */
        0,     /* Port (default=0) */
        NULL,  /* Socket (default=NULL) */
        0      /* keine Flags */  )  == NULL) {
      fprintf (stderr, "Fehler mysql_real_connect():"
        "%u (%s)\n",mysql_errno (my), mysql_error (my));
   }
   else
      printf("Erfolgreich mit dem MySQL-Server verbunden\n");

   /* Hier befindet sich der Code für die Arbeit mit MySQL. */


//fgets(darsteller, 254, stdin);
   schauspieler_suchen("0");
   /* Verbindung trennen */
   mysql_close (my);
   return EXIT_SUCCESS;
}


