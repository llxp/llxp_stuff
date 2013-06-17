
#include <stdio.h>

void myprinthex(char[]);
int main(int,char *[]);

int main(int argc, char *argv[])
{
  char myhexarray1[]={"\x1\x2\x3\x4"};                    /* Character string initialised to bytes habving value 1,2,3,4 */
  char myhexarray2[]={0x1,0x2,0x3,0x4} ;                  /* Array of characters initialised to bytes having value 1,2,3,4 */
  char myhexarray3[]={'\x1','\x2','\x3','\x4'};           /* Array of character - different notation - initialsed 1,2,3,4 */

  myprinthex(myhexarray1);
  myprinthex(myhexarray2);
  myprinthex(myhexarray3);
  return 0;
}

void myprinthex(char myarray[])				/* Print of hexidecimal representation of arrays or strings 	*/
{
  int i;

  for (i=0;i<sizeof(myarray);i++)
  {
    printf ("Byte %d of array of length %d has hex value 0x%x\n",i+1,sizeof(myarray),myarray[i]);
  }
  printf("\n");
}
