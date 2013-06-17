#include <my_global.h>
#include <mysql.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "mysql_funcs.h"
//#include <iostream.h>
MYSQL *conn;
  MYSQL_RES *result, *result_dbs, *result_tbl;
  MYSQL_ROW row, row_dbs, row_tbl;

  int num_fields;
  int i;
int counter_dbs = 0;
int counter_tbl = 0;
void print_html_header(char *titel) {
   printf("<html><head>\n");
   //printf("<link href='style.css' rel='stylesheet' type='text/css'>");
   printf("<title>%s</title>\n",titel);
   printf("</head><body>\n");

}
int print_datebase(char *dbsselect){
	while((row_tbl = mysql_fetch_row(result)) != NULL){
		print_table(row_tbl[0], dbsselect);
	}
mysql_free_result(result);
}
/* das Ende eines HTML-Dokuments */
void print_html_end(void) {
   printf("</body></html>\n");
}
void print_header(void) {
   printf("Content-Type: text/html\n\n");
}

int print_table(char *table, char *datebase){
  mysql_real_connect(conn, "localhost", "root", "AdmiN1995", datebase, 0, NULL, 0);
char table_[] = "SELECT * FROM none";
stringReplace("none", table, table_);
  mysql_query(conn, table_);
  result = mysql_store_result(conn);

  num_fields = mysql_num_fields(result);
printf("<table id='content'>");
  while ((row = mysql_fetch_row(result)))
  {
printf("<tr>");
      for(i = 0; i < num_fields; i++)
      {
	//printf("<tr>");
	printf("<td>");
          printf("%s", row[i] ? row[i] : "NULL");
	printf("</td>");
	/*printf("<td>");
	  printf("%s", row[i] ? row[1] : "NULL");
	printf("</td>");
	printf("<td>");
	  printf("%s", row[i] ? row[2] : "NULL");
	printf("</td>");
	printf("<td>");
	  printf("%s", row[i] ? row[3] : "NULL");
	printf("</td>");
	printf("<td>");
	  printf("%s", row[i] ? row[4] : "NULL");
	printf("</td>");
	printf("<td>");
	  printf("%s", row[i] ? row[5] : "NULL");
	printf("</td>");
	printf("<td>");
	  printf("%s", row[i] ? row[6] : "NULL");
	printf("</td>");
	printf("</tr>");*/
      }
printf("</tr>");
      printf("\n");
  }
printf("</table>");
  mysql_free_result(result);	
}

int main(int argc, char **argv)
{
//print_header();
conn = mysql_init(NULL);

//print_html_header("test");


//print_table("messages", "kaffee");
//print_table("top", "kaffee");
//print_table("users", "kaffee");
//print_table("filename_files_txt", "kaffee");
printf("Hallo\n");
mysql_list_dbs(conn,NULL);
//char *dbs;
//result_dbs = mysql_store_result(conn);
//printf("%s", result_dbs);
while((row_dbs = mysql_fetch_row(result)) != NULL){
print_datebase(row_dbs[0]);
}
mysql_free_result(result);
//printf("%s", result);
//char dbs[counter_dbs];
//dbs[0] = "h";
//dbs[1] = "a";
//dbs[2] = "l";
//printf("%s", dbs[0]);
//while((row_dbs = mysql_fetch_row(result)) != NULL){
//printf("%s \n", row_dbs[0]);
//}
//printf("%s \n", row_dbs[0]);
//printf("Datenbanken: %s", conn);*/
  mysql_close(conn);
print_html_end();

}

