/*
1
12
123
1234
*/
#include<stdio.h>
int main()
{
int i,j,n,x;
printf("enter number: ");
scanf("%d",&n);
for(i=1;i<=n;i++)
{ x=n;           // initilize x with 1 so every time loop starts with 1;
    for(j=1;j<=i;j++)
    {                                            
       printf("%d",x);
       x++;
    }
    printf("\n");
}
return 0;
}
