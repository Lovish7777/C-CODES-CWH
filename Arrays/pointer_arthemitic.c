#include<stdio.h>
int main()
{
int i=45;
int *p;
p=&i;
printf("\nAddress of i or value of p is: %u",p);
p+=2;
printf("\nAddress of i or value of p is: %u",p);
p--;
printf("\nAddress of i or value of p is: %u",p);
printf("\nAddress of i or value of p is: %u",++p);




return 0;
} 