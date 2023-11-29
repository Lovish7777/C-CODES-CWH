// prime
#include <stdio.h>
int checkprime(int);
int main()
{

    int arr[100], n, i, res;
    printf("enter a number where you want tp print prime number: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("\nYour entered number is: ");
    for (i = 0; i < n; i++)
    {
        printf("\n%d", arr[i]);
    }
    printf("\nprime number is: ");
    for (i = 0; i < n; i++)
    {

        res = checkprime(arr[i]);
        if (res == 1)
        {
            printf("\n\n\t%d", arr[i]);
        }
    }

    return 0;
}

int checkprime(int item)
{
    int d = 2;
    while (d < item - 1)   // why?  :::   coz array starts with 0; for ex arr[6] 6-1: 0,1,2,3,4,5;
    {
        if (item % d == 0)
        {
            return 0;
        }
        else
        {
            d = d + 1;
        }

        return 1; // means item is prime;'
    }
}
