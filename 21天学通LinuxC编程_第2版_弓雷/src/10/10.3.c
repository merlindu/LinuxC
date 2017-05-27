#include <stdio.h>
#include <ctype.h>
            					 

main()
{
  char s[]="12 0Q\n*&";
        					 
  int i;
            						 
  for (i=0;s[i]!=NULL;i++ )
        				 
  { 
    if (isgraph(s[i]))
        				 
    {
       printf("%c is a printable character.\n",s[i]);
 
    }
  }
}
