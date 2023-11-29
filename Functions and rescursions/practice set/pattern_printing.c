#include<stdio.h>
int pattern(int);
int main()
{
    int x;
 printf("enter number: ");
 scanf("%d",&x);
pattern(x);
return 0;
}


int pattern(int n)
{
    int i;

if(n==1)
{
    printf("*\n");
    return;
}
    pattern (n-1);
for( i=0;i<(2*n-1);i++)
{
    printf("*");
}
printf("\n");

}