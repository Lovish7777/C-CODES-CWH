#include <stdio.h>
int main()
{
    int a, b, c, d;
    printf("enter any 4 numbers: ");
    scanf("%d%d%d%d", &a, &b, &c, &d);
    printf("\nA=%d \nB=%d\nC=%d\nD=%d", a, b, c, d);
    if ((a > b) && (a > c) && (a > d))
    {
        printf("\nA is greatest :%d", a);
    }
    if ((b > a) && (b > c) && (c > d))
    {
        printf("\nB is greatest: %d", b);
    }
    if ((c > a) && (c > b) && (c > d))
    {
        printf("\nC is greatest: %d", c);
    }

    if ((d > a) && (d > b) && (d > c))
    {
        printf("\nD is greatest: %d", d);
    }
    else
    {
        printf("\nAll are equal");
    }
    return 0;
}