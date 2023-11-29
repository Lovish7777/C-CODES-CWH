// types of function call
//  call by value
#include <stdio.h>
int sum(int, int);
int main()
{
    int a, b;
    printf("enter a,b: ");
    scanf("%d%d", &a, &b);
    printf("\nSum is: %d", sum(a, b));
    return 0;
}

int sum(int x, int y)
{
    int z;
    z = x + y;
    return z;
}