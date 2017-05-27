#include <stdio.h>
void main()
{
  int i,sum;
  i=0;
  sum=0;
  do
  {
     sum=sum+i;
     i=i+2;
  }while(i<=100);

  printf("sum = %d \n",sum);
}
