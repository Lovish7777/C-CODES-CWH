#include <stdio.h>
int main()
{
    int i, n;
    int prime = 1;
    printf(" Enter your number: ");
    scanf("%d", &n);
    for (i =2 ; i < n; i++)
    {
        if (n % i == 0)
        {
            prime = 0;
            break;
        }
    }
    if (prime == 0)
    {
        printf("\n it not prime number");
    }
    else
    {
        printf("\n it a prime number");
    }

    return 0;
}