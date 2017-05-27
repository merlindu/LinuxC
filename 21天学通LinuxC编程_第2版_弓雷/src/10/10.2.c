#include <stdio.h>
#include <ctype.h>								 
main()
{
  char s[]="12as056;^*&";							 
  int i;									 
  for (i=0;s[i]!=NULL;i++ )						 
  {
    if (isalpha(s[i]))					 
    {
      printf("%c is a character.\n",s[i]); 
    }
  }
}
