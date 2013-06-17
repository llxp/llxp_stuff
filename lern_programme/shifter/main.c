/*#include <stdio.h>
#include <stdlib.h>

int main()
{
    //int c=97<<2;
    char s[]="abe";
    unsigned c=*(unsigned*)s>>8>>8>>1;
    printf("Hello world! %s a\n", &c);
    return 0;
}

#include <stdio.h>
#include <string.h>
//#include <io.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
    size_t size = 14;
    char *dst[size]= {0};
    char *src[size+1] = "\0000544D.TIF";

 while (size != 0) {
     dst[size] = src[size-1];
     size--;
}
}


#include <stdio.h>

void printbinary(char *x){
  char str[33]; str[32] = '\0';
  int i = 32;
  while(i){
      i--;
      str[i] = x;
      x>>2;
  }
  printf("1.%s\n", str);
}*/
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
//char *si_;

int CharToInt(char *character)
{    int string = (int) character[0];
return string-48;
}
char *shifter(char *si){
    int sc=strlen(si);
    int coc;
    char *six=(char*) malloc(strlen(si) * sizeof(char));
    //strcpy(six, si);
    //strcpy(&si_, si);
    int c;

for(c=0; c<sc; c++){
six[c]=si[c]>>1;
printf("%x\n", six[c]);
//printf("%d\n", si[c]>>32);
//si_[sc]=si[sc]<<8;
}
//printf("%s", six);
return (char *)six;
}
int main(void){
  char *a = "47a1c3a508d4dd527f28ff28195a5990";
  printf("%s", shifter(a));
  printf("\n%d\n", a[1]);

  return 0;
}
