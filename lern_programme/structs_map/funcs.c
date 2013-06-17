int string_length(char str[])
{
   int i;
   for(i=0; i<80; i++)
   {
	 if(str[i]=='\0')
	 {
	    return i;
	 }
   }
   return i;
}

