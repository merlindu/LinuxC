#include <stdio.h>

int main()
{
  char a[100];
  char *p,*q;

  printf("please input a string:\n") ;
  scanf("%s",a);
  p=a;
  q=a;
  printf("result:  %s \n",q) ;
  while(*p!=NULL)
  {
     if(*p<=122&&*p>=97)
     {
        *p= *p-32;
     }
     *p++;
  }
  printf("result:  %s \n",q) ;
}
