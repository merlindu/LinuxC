#include <stdio.h>
void main()
{
   int x, y, z, t;
   printf("please input x:\n");
   scanf("%d", &x);
   printf("please input y:\n");
   scanf("%d", &y);
   printf("please input x:\n");
   scanf("%d", &z);
   if(x > y)
   {
      t = x;
      x = y;
      y = t;
   }
   if(x > z)
   {
      t = x;
      x = z;
      z = t;
    }
    if(y > z)
    {
       t = y;
       y = z;
       z = t;
     }
     printf("%d  %d  %d",x,y,z);
}
