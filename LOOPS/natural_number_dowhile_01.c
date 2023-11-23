// do while loop
#include<stdio.h>
int main()
{
int n,i=0;
printf("enter number of terms: ");
scanf("%d",&n);
do
{
    printf("\n%d",i+1);
    i++;
}
while(i<n);
return 0;
}