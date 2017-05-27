#include <stdio.h>
#include <string.h>                            /*包含string.h头文件。*/
main()
{
   char *p;                                 /*定义1个指向字符的指针。*/
   char a[20]="asdfg";                        /*定义一个字符串并且赋初值。*/
   char b[20]="hjklm" ;
   printf("%s\n",a);                        /*输出原来的字符串。*/
   printf("%s\n",b);
   p=strcat(a,b);                            /*将字符串b连接到字符串a后面。*/
   printf("%s\n",a);                        /*输出连接以后的字符串。*/
   printf("%s\n",b);
   printf("%s\n",p);                        /*输出指针p指向的字符串。*/
}

