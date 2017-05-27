#include <stdio.h>

int main()
{
   int i;
   printf("please input a number:\n");
   scanf("%d",&i);
   if(i>=70)
   {
      if(i>=85)
      {
         printf("A");
      }
      else
      {
         printf("B");
      }
   }
   else
   {
       if(i>=60)
      {
         printf("C");
      }
      else
      {
         printf("D");
      }

   }
}
