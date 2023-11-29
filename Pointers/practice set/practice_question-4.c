#include <stdio.h>
int calculate(int, int, int *, float *);
int main()

{
    int a, b, sum;
    float avg;
    printf("Enter A: ");
    scanf("%d", &a);
    printf("Enter B: ");
    scanf("%d", &b);
    printf("\nValue of A is: %d  \n Value of B is : %d", a, b);
    calculate(a, b, &sum, &avg);
    printf("\nSum is : %d", sum);
    printf("\nAverage is: %.2f", avg);

    return 0;
}

int calculate(int x, int y, int *sum, float *avg)

{
    *sum = x + y;
    *avg = *sum / 2.0;
}