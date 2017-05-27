#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
struct stu
{
	char name[10];
	int age;	
};
main()
{
   struct stu mystu[3];
   FILE * fp;
   extern int errno; 
   char file[]="/root/a1.txt";
   int i,j;
 
   fp=fopen(file,"a+");
   if(fp==NULL)
   {
   	  printf("cant't open file %s.\n",file);
   	  printf("errno：%d\n",errno);
   	  printf("ERR  ：%s\n",strerror(errno));
   	  return;
   	}
   	else
   	{
   		printf("%s was opened.\n",file);   		
	}
    i=fread(mystu,sizeof(struct stu),3,fp);
    printf("%d students was read.\n",i);
    close(fp);
}
