// do while loop
#include<stdio.h>
int main()
{
int n,i=1;
printf("enter number of terms: ");
scanf("%d",&n);
do
{
    printf("\n%d",i);
    i++;
}
while(i<=n);
return 0;
}