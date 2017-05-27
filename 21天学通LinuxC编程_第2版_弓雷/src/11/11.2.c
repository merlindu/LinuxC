#include <stdio.h>

struct student
{
   char name[20];
   int age;
   char sex ;
   int height;
}

main()
{
    struct student Jim,Lily;
    Jim.age=13;
    strcpy(Jim.name,"Jim Green");
    Jim.sex='m';
    Jim.height=168;

    Lily.age=13;
    strcpy(Lily.name,"Lily Kate");
    Lily.sex='f';
    Lily.height=174;

    printf("Jim\n");
    printf(" Name:  %s\n",Jim.name);
    printf(" Age:   %d\n",Jim.age);
    printf(" Sex:   %c:\n",Jim.sex);
    printf(" Height:%d:\n",Jim.height );

    printf("Lily\n");
    printf(" Name:  %s\n",Lily.name);
    printf(" Age:   %d\n",Lily.age);
    printf(" Sex:   %c\n",Lily.sex);
    printf(" Height:%d\n",Lily.height );
}
