char *kill_the_nulls (char *s)
{
    while (*s && *s == '0')
        s++;
    return s;
}
char IntToChar(int integer)
{
return (char)integer+48;
}
int CharToInt(char *character/*, int player[4][64][100]*/)
{    int string = (int) character[0];
return string-48;
}
