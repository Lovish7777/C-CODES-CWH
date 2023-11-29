#include <stdio.h>
int area(int, int);
int main()
{
    int l, b, a;
    printf("enter length: ");
    scanf("%d", &a);
    printf("enter breadth: ");
    scanf("%d", &b);
    a = area(a, b);
    printf("\nArea is: %d", a);

    return 0;
}

int area(int x, int y)

{
    int z;
    z = x * y;
    return z;
}