#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funcs.h"
int i, a, loopvar;
char buf[30];
FILE *abc;
struct index {
   int id;
   char username[30];
   char db_name[30];
};


//abc = fopen ("testdatei.txt", "w");
 
/*char struct_test(int seite_, char titel_[30]){
   struct index lib;
   lib.seite = seite_;
   strcpy(lib.titel, titel_);
   printf("%d, %s\n",lib.seite, lib.titel);

}
int print_real_table(int *table__, int *datebase__){

char table___[] = "none";
stringReplace("none", table__, table___);
printf(table___, datebase__);
}*/

int save_struct(int id_, char username_[30]){
//	FILE *abc;
   struct index lib;
   lib.id = id_;
   strcpy(lib.username, username_);
   strcpy(lib.db_name, "index");
   fprintf(abc, "%d, %s, %s\n",lib.id, lib.username, lib.db_name);
}

int main (int argc, char *argv[]){
abc = fopen ("testdatei.txt", "r+");
 if (abc == NULL)
  {
    printf("Fehler beim oeffnen der Datei.");
    return 1;
  }

//char buf[300];
//save_struct(20, "xd");
 scanf("%d",&loopvar);
fprintf(abc, "\n\n\n\n\n");
for(i=0;i<loopvar;i++){
sprintf(buf, "%d", i+2);
//print_real_table(buf, buf);
save_struct(i, buf/*!!!!!!!!!!!!!!!!!!!*/);
}
//a=i++;
//itoa(struct_test(20, "xd"), buf, 10);
//char *xyz = struct_test(20, "xd");
//strcpy(buf, struct_test(20, "xd"));
//fprintf(abc, "i: %s", buf);
//}
fclose (abc);
return 0;
}
