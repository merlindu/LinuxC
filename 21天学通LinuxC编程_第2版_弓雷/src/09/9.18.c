#include <stdio.h>
void  add(int a,int b,int *c)                    /*����һ�������ַ����ĺ���,������3��ָ�롣*/
{
   *c=a+b;
}

int main()
{
    int a,b,c;
    a=5;
    b=8;
    add(a,b,&c);
    printf("reslut is %d",c);
}
