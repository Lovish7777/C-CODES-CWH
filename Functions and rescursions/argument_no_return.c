#include <stdio.h>
void multiply(int, int);

void multiply(int x, int y)
{
    int z;
    z = x * y;
    printf("\nproduct of a and b is  :%d", z);
}
int main()
{
    int a, b;
    printf("enter 2 numbers: ");
    scanf("%d%d", &a, &b);
    multiply(a, b);

    return 0;
}