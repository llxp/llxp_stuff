#include <stdio.h>
#include <stdlib.h>
#include "defined.h"
int main(int argc, char *argv[])
{
    KNOTEN *wurzel=NULL;

    printf("Hello world!\n");
    do {
      printf("Bitte Zahl eingeben : ");
      scanf("%d",&zahl);
      wurzel=einordnen(wurzel);
   } while(zahl != 0);
    return 0;
}
