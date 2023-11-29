#include <stdio.h>
int change(int *);
int main()
{
    int a, b;
    printf("enter value: ");
    scanf("%d", &a);
    printf("\nValue of A is: %d", a);
    b = change(&a);
    printf("\n10 times of %d is: %d", a, b);
    return 0;
}
int change(int *x)
{
    int y;
    y = 10 * (*x);
    return y;
}