// call by refrence;
#include <stdio.h>
void swap(int *x, int *y);
int main()

{
    int a, b;
    printf("enter A: ");
    scanf("%d", &a);
    printf("enter B: ");
    scanf("%d", &b);
    printf("\nBefore swapping: ");
    printf("\nA is: %d  \nB is: %d", a, b);
    swap(&a, &b); // call by address;
    printf("\nAfter swapping: ");
    printf("\nA is: %d  \nB is: %d", a, b);

    return 0;
}
void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
