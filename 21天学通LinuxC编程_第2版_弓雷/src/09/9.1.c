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
int max(int x ,int y)                /*����һ��������*/
{
   if(x>y)                        /*���x����y�ͷ���x��*/
   {
      return(x);
   }
   else                        /*����ͷ���y��*/
   {
      return(y);
   }
}

