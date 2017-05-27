#include<ctype.h>
main()
{
char str[]="123asd0ASD$%^";
int i;
for(i=0;str[i]!=0;i++)
if(isdigit(str[i]))
{
 printf("%c is a number.\n",str[i]);
 }
}


