#include <stdio.h>

struct student
{ 
   char name[15];
   int age;
   char address[50];
   int height;
};

struct class
{
   char teacher[20];
   struct student stu[50];
};

main()
{
    struct class A;
}
