#include<stdio.h>
int main()
{
int i=1;
int n;
int sum=0;
printf("enter number of terms : ");
scanf("%d",&n);

printf("Natural no upto %d is: ",n);
while(i<=n)
{
   
    printf("\n%d",i);

    sum=sum+i;
     i++;
    
}
printf("\nsum of %dth natural no is : %d",n,sum);


}