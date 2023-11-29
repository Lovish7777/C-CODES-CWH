#include <stdio.h>
int series(int);
int main()

{
    int n;
    printf("enter N for sum of first n natural number: ");
    scanf("%d", &n);
    int i = 1;
    while (n >= i)

    {
        printf("\n%d", i);
        i++;
    }
    int c = series(n);
    printf("\nSum is: %d", c);

    return 0;
}
int series(int x)
{
    int s = 0;
    if (x == 1)
    {
        return 1;
    }
    else
    {
        s = x + series(x - 1);
    }
    return s;
}