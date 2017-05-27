#include <stdio.h>
#include <stdlib.h>
main()
{
   char a[20]="asFG$%";
   int i;
   char c;
   printf("tolower:\n");
   for(i=0;a[i]!=NULL;i++)
   {
      c=tolower(a[i]);
      printf("  %c  %c\n",a[i],c);
   }
   printf("toupper:\n");
   for(i=0;a[i]!=NULL;i++)
   {
      c=toupper(a[i]);
      printf("  %c  %c\n",a[i],c);
   }
}
