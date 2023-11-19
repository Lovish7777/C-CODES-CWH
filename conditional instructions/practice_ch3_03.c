#include <stdio.h>
int main()
{
    float tax = 0.0;
    float income;

    printf("enter income: ");
    scanf("%f", &income);
    if ((income >= 250000) && (income <= 500000))
    {
        tax = 0.05 * (income - 250000);
    }
    if ((income >= 500000) && (income <= 1000000))
    {
        tax = tax + 0.20 * (income - 250000);
    }
    if (income > 100000)
    {
        tax = tax + 0.30 * (income - 250000);
    }
    printf("your tax is : %.2f", tax);

    return 0;
}
