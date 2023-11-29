// pattern programs
#include<stdio.h>
int main()
{
int i,n,j;
printf("enter number :");
scanf("%d",&n);            // i=row; j=column;
for(i=1;i<=n;i++)
{
    for(j=1;j<=2*n-1;j++)
    {
    printf("*");
}
printf("\n");
}
return 0;
}