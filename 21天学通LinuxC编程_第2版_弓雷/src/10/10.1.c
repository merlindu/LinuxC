#include <stdio.h>
#include <ctype.h>
main()
{
  char s[]="12as056;^*&";
  int i;
  for (i=0;s[i]!=NULL;i++ )
  {
    if (isalnum(s[i]))
    {
       printf("%c is an number or character.\n",s[i]);
    }
  }
}
