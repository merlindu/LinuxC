#include <stdio.h>
#include <ctype.h>

main()
{
  char s[]="12asSHDqw^&*";
  int i;
  for (i=0;s[i]!=NULL;i++ )
 { 
    if (islower(s[i]))
    {
       printf("%c is a islower character.\n",s[i]);
    }
    if (isupper(s[i]))
    {
       printf("%c is a upper character.\n",s[i]);
    }
 }
}
