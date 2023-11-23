#include <stdio.h>
int main()
{
    int i, n, rev = 0, rem;
    printf("Enter your number :");
    scanf("%d", &n);
    printf("\nOrignal number is: \n%d", n);
    printf("\nReverserd number is: ");
    for (i = 1; i <= n; i++)
    {

        rem = n % 10;
        rev = rev * 10 + rem;
        n = n / 10;
    }
    printf("\n%d", rev);

    return 0;
}