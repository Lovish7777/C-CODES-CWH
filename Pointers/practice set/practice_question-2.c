#include <stdio.h>
void compare(int);
int main()
{
    int a = 5;
    printf("\nValue is: %d", a);

    compare(a);
    printf("\nAddress is: %u", &a);

    return 0;
}
void compare(int x)
{
    printf("\nAddress inside function is : %u", &x);
}