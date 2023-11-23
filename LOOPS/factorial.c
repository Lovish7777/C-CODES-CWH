#include<stdio.h>
int main()
{
    int i,n,fact=1;
    printf("enter number: ");
    scanf("%d",&n);
    printf("\nfactorial is: ");
    for(i=1;i<=n;i++)
    {
        fact=fact*i;

    }
    printf("\n%d ! is: %d",n,fact);
}