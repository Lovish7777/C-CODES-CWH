#include <stdio.h>
int main()
{
    int i, n, sum;
    int start, end;
    printf("\nenter starting point:");
    scanf("%d", &start);
    printf("\nenter ending point:");
    scanf("%d", &end);
    printf("\nPerfect number between %d to %d is: \n ", start, end);
    for (i = start; i <= end; i++)
    {
        n = 1;
        sum = 0;
        while (n < i)
        {
            if (i % n == 0)
            {
                sum += n;
            }
            n++;
        }
        if (sum == i)
        {
            printf("\n%d", i);
        }
    }
    return 0;
}
