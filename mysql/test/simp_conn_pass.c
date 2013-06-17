#include <mysql.h> 
#include <password.hh> 

MYSQL     *conn;
MYSQL_RES *res;
MYSQL_ROW  row;

int main ()
{
    conn = mysql_init ( NULL );
    mysql_real_connect ( conn,"localhost","ana",
            password(),"bank",0,NULL,0);

    mysql_query(conn,"show tables");
    res = mysql_store_result(conn);
    
    while ( row = mysql_fetch_row(res) )
    {
        fprintf (stdout,"%s\n", row[0]);
    }
    fprintf (stdout,"\n%lu rows affected\n",
            (unsigned long) mysql_num_rows(res));

    mysql_close(conn);
    exit(0);
}
