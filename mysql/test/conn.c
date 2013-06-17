#include <mysql.h> 
#include <stdio.h> 
#include <stdlib.h> 
#include <getopt.h> // for getopt_long 
#include "conn.h" 


int main (int argc, char* argv[])
{
    int i, c, option_index;
    char databases[15][30];


    char *pass = NULL;
    char *user = NULL;
    char *host = NULL;
    char *sock = NULL;
    unsigned int port = 0;

    // needs for operations required by load_defaults().
    my_init();
    // reads /etc/.my.cnf or ${HOME}/.my.cnf file
    load_defaults("my",groups,&argc,&argv);

    // allows assigning values for host, pass...
    while((c=getopt_long(argc,argv,"h:p:u:P:S:",long_options,
                    &option_index)) != EOF)
    {
        switch(c)
        {
            case 'h':
                host = optarg;
                break;
            case 'u':
                user = optarg;
                break;
            case 'p':
                pass = optarg;
                break;
            case 'P':
                port = (unsigned int) atoi(optarg);
                break;
            case 'S':
                sock = optarg;
                break;
        }
    }

    //=================================================
    if ( (conn = mysql_init(NULL)) == NULL)
    {
        print_error("mysql_init()");
        exit (EXIT_FAILURE);
    }
    if ( (mysql_real_connect(conn,host,user,pass,"",0,NULL,0))
                == NULL)
    {
        print_error("mysql_real_connect()");
        exit (EXIT_FAILURE);
    }
    mysql_query(conn,"show databases");
    res = mysql_store_result(conn);

    i=0;
    system("clear");
    printf("\nThere are %lu databases\n",how_rows());
    puts("=====================");

    while ( row = mysql_fetch_row(res) )
    {
        strcpy(databases[i],row[0]);
        puts(databases[i]);
        i++;
    }
    mysql_close(conn);
    return 0;

}
//---------------------------------------------------------- 
unsigned long how_rows (void)
//---------------------------------------------------------- 
{
    return (unsigned long) mysql_num_rows(res);
}
//---------------------------------------------------------- 
void print_error(char* msg)
//---------------------------------------------------------- 
{
    fprintf(stderr,"%s\n",msg);
    if ( conn != NULL )
    {
        fprintf(stderr,"Error: %u %s\n",mysql_errno(conn),
                mysql_error(conn));
    }
}
