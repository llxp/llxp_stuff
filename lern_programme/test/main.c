#include <stdio.h>
#include <stdlib.h>
char intToChar(int integer)
{
return (char)integer+48;
}
int mainx()
{
    printf("Hello world!\n");
printf("%c", intToChar(49));
    return 0;
}
