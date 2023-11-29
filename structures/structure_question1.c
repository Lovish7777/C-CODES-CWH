#include<stdio.h>
#include<string.h>
int main()
{
typedef struct cricket
{
int age;
int noOfmacth;
char name[15];
float average_run;

} cricket;
cricket arr[3];
printf("\nenter: \n");
for(int i=0;i<3;i++)
{
    
    scanf("%s",arr[i].name);
    scanf("%d",&arr[i].age);
    scanf("%d",&arr[i].noOfmacth);
    scanf("%f",&arr[i].average_run);
}

for(int i=0;i<3;i++)

{
printf("\nName of cricketer %d is %s",i+1,arr[i].name);
printf("\nAge of cricketer %d is %d",i+1,arr[i].age);
printf("\nNumber of macthes of cricketer %d is: %d",i+1,arr[i].noOfmacth);
printf("\nAverage run of cricketer %d is %.2f",i+1,arr[i].average_run);


}


return 0;
}