#include <my_global.h>
#include <mysql.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "mysql_funcs.h"
//#include <iostream.h>
MYSQL *conn, *conn_dbs, *conn_tbl;
  MYSQL_RES *result, *result_dbs, *result_tbl;
  MYSQL_ROW row, row_dbs, row_tbl;

  int num_fields, num_fields_dbs, num_fields_tbl;
  int i;
int counter_dbs = 0;
int counter_tbl = 0;
void print_html_header(char *titel) {
   printf("<html><head>\n");
   //printf("<link href='style.css' rel='stylesheet' type='text/css'>");
   printf("<title>%s</title>\n",titel);
   printf("</head><body>\n");

}

/* das Ende eines HTML-Dokuments */
void print_html_end(void) {
   printf("</body></html>\n");
}
void print_header(void) {
   printf("Content-Type: text/html\n\n");
}
int print_real_table(char *table__, char *datebase__){
char table___[] = "SELECT * FROM none";
stringReplace("none", table__, table___);
print_table(table___, datebase__);
}

int print_table(char *table, char *datebase){
conn = mysql_init(NULL);
mysql_real_connect(conn, "localhost", "root", "AdmiN1995", datebase, 0, NULL, 0);
char table_[] = "none";
stringReplace("none", table, table_);
  mysql_query(conn, table_);
  result = mysql_store_result(conn);

  num_fields = mysql_num_fields(result);
printf("<table id='content'>");
  while ((row = mysql_fetch_row(result)))
  {
if(row != NULL){
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
}else{return 0;}
  }
printf("</table>");
  mysql_free_result(result);
mysql_close(conn);
return 0;
}

int tbl_print(char *dbs){
conn_tbl = mysql_init(NULL);
mysql_real_connect(conn_tbl, "localhost", "root", "AdmiN1995", dbs, 0, NULL, 0);
mysql_list_tables(conn_tbl,NULL);
result_tbl = mysql_store_result(conn_tbl);
num_fields_tbl = mysql_num_fields(result_tbl);
//while((row_tbl = mysql_fetch_row(result_tbl)) != NULL){
//print_table(row_tbl[0], dbs);
printf("%d", num_fields_tbl);
//}
mysql_free_result(result_tbl);
mysql_close(conn_tbl);
return 0;
}

int dbs_print(void){
//mysql_thread_init();
conn_dbs = mysql_init(NULL);
mysql_real_connect(conn_dbs, "localhost", "root", "AdmiN1995", NULL, 0, NULL, 0);
mysql_list_dbs(conn_dbs,NULL);
result_dbs = mysql_store_result(conn_dbs);
while((row_dbs = mysql_fetch_row(result_dbs)) != NULL){
//tbl_print(row_dbs[0]);
printf("%s", row_dbs[0]);
}
mysql_free_result(result_dbs);
mysql_close(conn_dbs);
return 0;
}

int main(int argc, char *argv)
{
////////printf("%i", argc);
//print_header();
////////conn = mysql_init(NULL);
//print_table("SELECT * FROM messages", "kaffee");
//print_table("SELECT * FROM top", "kaffee");
//print_table("users", "kaffee");
//print_table("filename_files_txt", "kaffee");
print_table("SHOW datebases", "NULL");
////////printf("Hallo\n");
//mysql_list_dbs(conn,NULL);
//mysql_list_tables(conn, NULL);
//while((row_tbl = mysql_fetch_row(result)) != NULL){
	
	//result_tbl = mysql_store_result(conn);
	//mysql_free_result(result);
	////////while((row_dbs = mysql_fetch_row(result)) != NULL){
		//print_table(row_tbl[0]);
//mysql_free_result(result);
////////printf("%s \n", row_tbl[0]);
////////}
////////mysql_free_result(result);
//}
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
  ////////mysql_close(conn);
//print_table("top", "kaffee");
//dbs_print();
print_html_end();
return 0;
}

