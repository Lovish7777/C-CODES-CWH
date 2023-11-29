// no returen no argument;
void add();
#include <stdio.h>
int main()
{
    add();
    return 0;
}

void add()
{
    int a, b, c;
    printf("Enter 1st number: ");
    scanf("%d", &a);
    printf("Enter 2nd number: ");
    scanf("%d", &b);

    printf("\nSum is : %d ", (a + b));
}