#include<stdio.h>
#include<string.h>
typedef struct student
{
    int roll;
    char name[15];
    char dept[15];
    char course[15];
    int year;
}student;

void check(student a, student b)
{
printf("\nDepartment of student 1: %s",a.dept);
printf("\nDepartment of student 2: %s",b.dept);
int x=strcmp(a.dept,b.dept);
if(x==0)
{
    printf("\nBoth have same department");
}
else{
    printf("\nBoth have Not same department");
}
} 


int main()
{
student s1,s2;
strcpy(s1.name,"Harry");
strcpy(s1.dept,"Civil");
strcpy(s1.course,"Calculas");
s1.roll=121;
s1.year=2;

strcpy(s2.name,"luffy");
strcpy(s2.dept,"Civil");
strcpy(s2.course,"physics");
s2.roll=11;
s2.year=3;

check(s1,s2);

return 0;
}