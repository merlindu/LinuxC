#include <stdio.h>

void show(char a ,int x)
{
   int i;
   for(i=0;i<x;i++)
   {
       printf("%c",a);
   }
}

int main()
{
   char a='a';
   show(a,6)  ;
   printf("\n") ;
   show('*',6)  ;
}


