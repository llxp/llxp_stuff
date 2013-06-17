#include <stdio.h> 
#include <mysql.h> 

MYSQL *conn;    /* pointer to connection handler */

int main ( int argc, char *argv[] )
{
    conn = mysql_init ( NULL );
    mysql_real_connect (
            conn,           /* pointer to connection handler */
            "localhost",    /* host to connect to */
            "user_name",    /* user name */
            "password",     /* password */
            "test",         /* database to use */
            0,              /* port (default 3306) */
            NULL,           /* socket or /var/lib/mysql.sock */
            0 );            /* flags (none) */

    mysql_close ( conn );
    return 0;
}
