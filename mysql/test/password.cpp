
// I specially didn't use C++ libraries for 
// the compatibility with C compiler

#include "password.hh"

char* password (void)
{
    char file[50];
    FILE *in;

    sprintf(file,"%s/.password", getenv("HOME"));
    if ( (in = fopen(file,"r")) == NULL )
    {
        printf("You must create file .password");
        printf(" in you home directory\n");
        exit(EXIT_FAILURE);
    }
    fscanf(in,"%s",pas);
    fclose(in);
    return pas;
}

