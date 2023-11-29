#include<stdio.h>
int series(int);
int main()

{
int n;
printf("enter number of terms to be entered: ");
scanf("%d",&n);

for(int i=0;i<n;i++)
{
    printf("\n%d",series(i));
}
return 0;
}

int series(int x)
{
    if(x==0)
    return 0;

else if(x==1)
{
    return 1;
}
else{

    return series(x-2) + series(x-1);
}
}