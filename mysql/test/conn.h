MYSQL *conn;
MYSQL_RES *res;
MYSQL_ROW  row;
const char* groups[] = {"client",NULL};
struct option long_options[] =
{
    {"host",required_argument,NULL,'h'},
    {"user",required_argument,NULL,'u'},
    {"password",optional_argument,NULL,'p'},
    {"port",required_argument,NULL,'P'},
    {"socket",required_argument,NULL,'S'},
    {0,0,0,0}
};

unsigned long how_rows (void);
void print_error(char *);

