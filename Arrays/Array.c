#include<stdio.h>
int main()
{
int marks[5],i;
printf("enter marks of 5 student: ");
for(i=0;i<5;i++)
{
    scanf("%d",&marks[i]);
}
printf("Marks are: \n");
for(i=0;i<5;i++)
{
    printf("\n%d",marks[i]);
}
return 0;
}