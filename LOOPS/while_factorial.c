#include<stdio.h>
int main()
{
    int i=1,n,fact=1;
printf("enter number: ");
scanf("%d",&n);
printf("\n factorial is :");
while(i<=n)
{
    fact=fact*i;
    i++;
}
printf("\n%d",fact);


}