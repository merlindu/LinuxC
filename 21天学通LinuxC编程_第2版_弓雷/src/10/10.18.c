#include <stdio.h>
#include <string.h>
main()
{
   char a[20]="asdfgh";
   char b[20];
   char *p;
   p=strcpy(b,a);
   printf("%s\n",a);
   printf("%s\n",b);
   printf("%s\n",p);
}
