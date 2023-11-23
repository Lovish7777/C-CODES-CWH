// practicd set loop
#include<stdio.h>
int main()
{
int i;
int n;
printf("enter number :");
scanf("%d",&n);
printf("\nTable of: %d is ",n);
while(i<=10)
{
    printf("\n%d * %d = %d ",n,i,n*i);
    i++;
}
return 0;
}