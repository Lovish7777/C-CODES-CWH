// PERFEECT NUMBER
#include <stdio.h>
int main()
{
    int i, n, sum = 0;
    int start, end, perfect;

    printf("Enter number: ");
    scanf("%d", &n);
    for (i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            sum += i;
            printf("\n%d", i);
        }
    }
    if (sum == n)
    {
        printf("\n its a perfect number : ");
    }
    else
    {
        printf("\nits not a perfevt number");
    }

    return 0;
}