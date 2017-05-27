#include <stdio.h>

int main()
{
   int a,b,s;
   printf("please input a:\n");
   scanf("%d",&a);
   printf("please input b:\n");
   scanf("%d",&b);
   s=max(a,b);
   printf("the max number is %d\n",s);


}
int max(int x ,int y)                /*定义一个函数。*/
{
   if(x>y)                        /*如果x大于y就返回x。*/
   {
      return(x);
   }
   else                        /*否则就返回y。*/
   {
      return(y);
   }
}

