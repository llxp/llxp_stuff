#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char s, b;
char *kill_the_nulls (char* s)
{
    while (*s && *s == '0')
        s++;
    return s;
}

int main()
{
    char *b = "000102";
    printf("%s\n", kill_the_nulls(b));
    return 0;
}
