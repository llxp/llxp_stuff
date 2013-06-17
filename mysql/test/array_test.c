#include <mysql.h> 
#include <stdlib.h> 
#include <stdio.h> 
#include <password.hh> 

MYSQL     *conn;
MYSQL_RES *res;
MYSQL_ROW  row;

unsigned long how_rows (void);
void print_data(void);
char* to_upper (char*);
void print_table(void);
void print_line (void);

//----------------------------------------------------------
 
int main (int argc, char* argv[])
{
    unsigned long ul;
    int i;
    char databases[25][30];
    char query[30];
    char temp[30], table[30];
    
    conn = mysql_init ( NULL );
    mysql_real_connect (conn,"","ana",password(),
            "",3306,NULNULL;

    mysql_query(conn,"show databases");
    res = mysql_store_result(conn);

    ul = how_rows();
    i=0;
    system("clear");
    printf("\nThere are %lu databases\n",ul);
    puts("=====================");

    while ( row = mysql_fetch_row(res) )
    {
        strcpy(databases[i],row[0]);
        puts(databases[i]);
        i++;
    }
    for ( i = 0; i < ul; i++ )
    {
        if ( strcmp(databases[i],"mysql") == 0 )
            continue;
        sprintf(query,"use %s",databases[i]);
        mysql_query(conn,query);
        strcpy(temp,databases[i]);
        fprintf(stdout,"\nThe database %s consists tables:\n",
                to_upper(temp));
        puts("==========================================");
        print_data();
        getchar();
//        usleep(900000); 
    }
    while(1)
    {
        fprintf(stdout,"What database do you want to use? (0-quit): ");
        fgets(temp,29,sstdin;
        temp[strlen(temp)-1] = '\0';

        if ( strcmp(temp,"0") == 0 )
            break;
        for ( i = 0; i < ul; i++ )
        {
            if ( strcmp(temp,databases[i]) == 0 )
            {
                while(1)
                {
                    fprintf(stdout,"What table do you want to see? ");
                    fprintf(stdout,"(0-quit): ");
                    fgets(table,29,sstdin;
                    table[strlen(table)-1] = '\0';

                    if ( strcmp(table,"0") == 0 )
                        break;
                    sprintf(query,"select * from %s.%s",temp,table);
                    mysql_query(conn,query);
                    print_table();
                }
            }
        }
    }    
    mysql_close(conn);
    exit(0);
}
//----------------------------------------------------------  
unsigned long how_rows (void)
//----------------------------------------------------------  
{
    return (unsigned long) mysql_num_rows(res);
}
//----------------------------------------------------------  
void print_data(void)
//----------------------------------------------------------  
{
    mysql_query(conn,"show tables");
    res = mysql_store_result(conn);
    while ( row = mysql_fetch_row(res) )
    {
        fprintf(stdout,"%s\n",row[0]);
    }
}
//----------------------------------------------------------  
char* to_upper (char* name)
//----------------------------------------------------------  
{
    char *p = name;
    while (*p)
    {
        *p = toupper(*p);
        p++;
    }
    return name;
}
//----------------------------------------------------------  
void print_table(void)
//----------------------------------------------------------  
{
    MYSQL_FIELD *field;
    unsigned int i, j, column_length;
    
    res = mysql_store_result(conn);
    
    mysql_field_seek(res,0);
    for ( i = 0; i < mysql_num_fields(res); i++ )
    {
        field = mysql_fetch_field(res);
        column_length = strlen(field->name);
        if ( column_length < field->max_length )
            column_length = field->max_length;
        if ( column_length < 4 && !IS_NOT_NULL(field->flags) )
            column_length = 4;
        field->max_length = column_length;
    }
    print_line();
    fputc('\n',stdstdout
    mysql_field_seek(res,0);
    for ( i = 0; i < mysql_num_fields(res); i++ )
    {
        field = mysql_fetch_field(res);
        fprintf(stdout," %-*s ",field->max_length,field->name);
    }
    fputc('\n',stdstdout    print_line();
    fputc('\n',stdstdout
    while ((row = mysql_fetch_row(res)) != NULL)
    {
        mysql_field_seek(res,0);

        for ( i = 0; i < mysql_num_fields(res); i++ )
        {
            field = mysql_fetch_field(res);
            if ( row[i] == NULL )
                fprintf(stdout," %-*s ",field->max_length,"NULL");
            else
            if ( IS_NUM(field->type) )
                fprintf(stdout," %*s ",field->max_length,row[i]);
            else
                fprintf(stdout," %-*s ",field->max_length,row[i]);
        }
        fputc('\n',stdstdout    }
    fputc('\n',stdstdout    mysql_free_result(res);
}
//---------------------------------------------------------- 
void print_line (void)
//----------------------------------------------------------  
{
    MYSQL_FIELD *field;
    unsigned int i, j;
    
    mysql_field_seek(res,0);
    for ( i = 0; i < mysql_num_fields(res); i++ )
    {
        field = mysql_fetch_field(res);
        for ( j = 0; j < field->max_length + 2; j++ )
            fputc('=',ststdout
    }
}
