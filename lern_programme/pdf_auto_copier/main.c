#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <dirent.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <time.h>
#define MAX_PATH 10000
char pdfs[20][20]={
    {""},{""},{""},{""},{""},{""},{""},{""},{""},{""},{""},{""},{""},{""},{""},{""},{""},{""},{""},{""}
};
char *tmp_path="/tmp";
char *exec_var="ls /tmp";
FILE *getfile(char *msg, char *mode);
int copy_directory(const char* path);
  char line[1024];              /* Zeilenpuffer */
  FILE *ifp, *ofp;              /* Filepointer */
  int c;
  char c_string, d_string;
int main(int argc, char** argv)
{
    int result = 0;
    int i;
//    clock_t prgstart, prgende;

start:    sleep(2);
        //prgstart=clock();
        printf("1\n");
        if (copy_directory("/tmp/")) {
            result = 1;
            perror("Can't open directory.\n");
    }
    goto start;
    //printf("\n%s\n", pdfs[1]);
    return result;
}

int wp=0;
int copy_directory(const char* path) {
    DIR *dir;
    struct dirent *ent;
    struct stat stat_buf;

    // Copy the path into a local buffer
    char full_path[MAX_PATH];
    int source_length = strlen(path);
    if (source_length > (MAX_PATH - 1))
        return 1;
    memcpy(full_path, path, source_length);

    // Try to open the directory
    if ((dir = opendir(path)) == NULL)
        return 1;

    // Iterate over all subobjects
    while ((ent = readdir(dir)) != NULL) {
        // Create the full path
        int str_length = strlen(ent->d_name) + 1;
        if (str_length + source_length > MAX_PATH)
            continue;
        if(strstr(ent->d_name, ".pdf")){
            //if(strcmp(ent->d_name, pdfs[wp-1])==NULL){
           // if(strstr(ent->d_name, "copy_exiter_file.xD")!=NULL){
            //printf("Hallo%s=%s", pdfs[wp], ent->d_name);
            sprintf(&c_string, "/tmp/%s", ent->d_name);
            sprintf(&d_string, "/home/llxp/Dokumente/wissen/%s", ent->d_name);
              if ((ifp = getfile(&c_string, "r")) == NULL) {
                exit(1);
              }
              /* Ausgabedatei oeffnen */
  if ((ofp = getfile(&d_string, "w")) == NULL) {
    fclose(ifp);
    exit(1);
  }
   /* Zeilenweise lesen und schreiben */
  while (fgets(line, sizeof(line), ifp))
    fputs(line, ofp);

  /* Files schliessen und Ende */
  fclose(ifp);
  fclose(ofp);
            strcpy(pdfs[wp], ent->d_name);
            //wp++;
        }else{continue;
        }
        //printf("!!!!!!!!!!!!!!!!%s\n", ent->d_name);
        memcpy(&full_path[source_length], ent->d_name, str_length);

        // stat doesn't work? Go away
        if (stat(full_path, &stat_buf))
            continue;

        // Get the type of the file (d = directory, - = file, ? = something else)
        char type = '?';
        if (S_ISDIR(stat_buf.st_mode))
            type = 'd';
        else if (S_ISREG(stat_buf.st_mode))
            type = '-';

        // And at least print the information
        //printf("%c %s\n", type, full_path);
        //printf("\n");
    }
    closedir(dir);

    return 0;
}

/* Dateinamen lesen und Datei mit Modus mode oeffnen */
FILE *getfile(char *fname, char *mode)
{
  //char *fname;      /* Dateiname */
  FILE *fp;             /* Dateipointer */
  int n;

  /* Evtl. Newline entfernen und durch EOS ersetzen */
  n = strlen(fname);
  if (fname[n - 1] == '\n')
    fname[n - 1] = '\0';

  /* Datei mit Modus mode oeffnen */
  if ((fp = fopen(fname, mode)) == NULL)
    perror(fname);

  return(fp);

} /* getfile() */
