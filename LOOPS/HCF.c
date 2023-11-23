#include<stdio.h>
int main()
{int i,j,n1,n2,hcf;

printf("enter 1st number: ");
scanf("%d",&n1);
printf(" enter second number: ");
scanf("%d",&n2);
j=(n1<n2)? n1: n2;
for(i=1;i<=j;i++)
{
    if(n1%i==0 && n2%i==0)
    {
        hcf=i;
    }
}

printf("Hcf of %d and %d is: %d",n1,n2,hcf);





    return 0;
}