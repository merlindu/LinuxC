#include <stdio.h>

int main()
{
   int i ,j ;
   printf("please input a number:\n");
   scanf("%d",&i);
   j =i %2;
   if(j==0)
   {
      printf("%d oushu.\n",i);
   }
   else
   {
      printf("%d jishu.\n",i);
   }
}
