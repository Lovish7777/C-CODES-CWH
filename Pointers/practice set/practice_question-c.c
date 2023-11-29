#include<stdio.h>
int main()
{
int a=5;
int *ptr;
ptr=&a;
printf("Address of a is: %u",ptr);
printf("\nValue at address ptr is: %d",*ptr);
return 0;
}