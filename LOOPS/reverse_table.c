// practicd set loop
#include<stdio.h>
int main()
{
int i;
int n;
printf("enter number :");
scanf("%d",&n);
printf("\nTable of: %d is ",n);
for(i=10;i>0;i--)
{
    printf("\n%d * %d = %d ",n,i,n*i);
}
return 0;
}