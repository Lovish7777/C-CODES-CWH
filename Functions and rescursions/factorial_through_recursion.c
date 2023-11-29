// recuresion;

#include<stdio.h>
int factorial(int );
int main()
{
    int n,m;
    printf("enter numner: ");
    scanf("%d",&n);
    printf("factorial of %d! is: ", n);
   m=factorial(n);
   printf("\n%d",m);

return 0;
} 
int factorial(int x)
{
    printf("\n calling factorial : (%d) ",x);
   int f;
   if(x==1 || x==0)                      // base condition
    {
        return 1;
    }
  
    else
    {
        f= x*factorial(x-1);      
        return f;
    }

}