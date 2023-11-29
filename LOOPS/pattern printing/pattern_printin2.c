// pattern programs
#include<stdio.h>
int main()
{
int i,n,j;
printf("enter number :");
scanf("%d",&n);            // i=row; j=column;
for(i=n;i>=1;i--)
{
    for(j=1;j<=i;j++)
    {
    printf("*");
}
printf("\n");
}
return 0;
}