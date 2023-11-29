#include<stdio.h>
int main()
{
int a=3;
printf("%d, %d, %d",a,++a,a++); // in printf arguments pass right to left
return 0;
}