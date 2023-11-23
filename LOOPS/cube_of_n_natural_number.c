#include<stdio.h>
int main()
{
int i=1,n,cube;
printf("enter number: ");
scanf("%d",&n);
while(i<=n)
{
   cube=i*i*i;
   printf("\nCube of %d is:  %d",i,cube);
   i++;
}



}