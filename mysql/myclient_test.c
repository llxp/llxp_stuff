#include "my_global.h"
#include "mysql.h"
#include <stdio.h>
#include <unistd.h>
#include <sys/ioctl.h>
#include <fcntl.h>
#include <stdlib.h>
#include <linux/cdrom.h>
#include <errno.h>

#define DB_HOST "localhost"
#define DB_USER "root"
#define DB_PASSWORD "AdmiN1995"
#define DB_NAME "c-test"

int main(void){
MYSQL *my;

unsigned int error;
my = mysql_init(NULL);

if(my == NULL) {
   fprintf(stderr, "Fehler beim Initialisieren \n");
   exit (EXIT_FAILURE);
}

if( mysql_real_connect (
                my,            /* Zeiger auf MYSQL-Handler */
                DB_HOST, /* Host-Name */
                DB_USER, /* User-Name */
                DB_PASSWORD,  /* Passwort für user_name */
                DB_NAME,   /* Name der Datenbank */
                0,             /* Port (default=0) */
                NULL,          /* Socket (default=NULL) */
                0              /* keine Flags */  )  == NULL)
error = mysql_errno(my);
if( error == CR_CONN_HOST_ERROR )
   fprintf(stderr, "Keine Verbindung zu Host\n");
printf("");
}
