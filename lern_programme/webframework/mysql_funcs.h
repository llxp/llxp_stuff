#include <my_global.h>
#include <mysql.h>
extern MYSQL *conn;
extern char *server, *user, *password, *database;
extern int error;
int version(){
printf("MySQL client version: %s\n", mysql_get_client_info());
return 0;
}

int mysql_start(){
    if(conn==NULL){
    conn=mysql_init(NULL);
    }
if (!mysql_real_connect(conn, server,user, password, database, 0, NULL, 0))
{
        fprintf(stderr, "%s\n", mysql_error(conn));
        error = 1;
}
return 0;
}
