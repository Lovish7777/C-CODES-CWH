// practicd set loop
#include<stdio.h>
int maain()
{
int i;
int n;
printf("enter number :");
scanf("%d",&n);
printf("\nTable of: %d is ",n);
while(i<n)
{
    printf("\n%d * %d = %d ",n,i,n*i);
    i++;
}
return 0;
}