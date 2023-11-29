#include <stdio.h>
void factorial(int, int);

int main()
{
    int n, r;
    printf("enter n: ");
    scanf("%d", &n);
    printf("enter r: ");
    scanf("%d", &r);

    factorial(n, r);
   return 0;

    return 0;
}
void factorial(int x, int y)                         
{
    int  fn = 1, fr=1, nr= x-y, fnr = 1, ncr;
   
    while (x > 0)
    {
        fn = fn * x;
        x = x - 1;
    }
    printf("\nN is: %d",fn);

    while (y > 0)
    {
        fr = fr * y;
        y = y - 1;
    }
    printf("\n R is: %d", fr);
    while(nr>0)
    { 
        fnr = fnr * nr;
        nr=nr-1;
        
    }
    printf("\n(n-r) is : %d", fnr);
    ncr = fn / (fr * fnr);
    printf("\nNCR is :%d", ncr);
}
