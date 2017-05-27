#include <stdio.h>
#include <string.h>
main()
{
   char a[20]="asdfgh";
   char b[20]="ijklmn";
   char *s;
   printf("%s\n%s\n",a,b);
   s=memccpy(a,b,'k',3);
   printf("%c\n",*s);
   printf("%s\n%s\n",a,b);
}
