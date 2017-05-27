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
  struct student stu[3];
  stu[1].age=15;
  stu[2].height=167;
  stu[0].sex='m';

}
