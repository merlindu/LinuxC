#include <stdio.h>
void main()
{
  int i,sum;
  sum=0;
  for(i=0;i<=100;i++)
  {
     if(i%2==1)
     {
        continue;
     }
     sum = sum +i;
  };

  printf("sum = %d \n",sum);
}
