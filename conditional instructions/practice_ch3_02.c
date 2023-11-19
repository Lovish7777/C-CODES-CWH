#include <stdio.h>
int main()
{
    int roll;
    float eng, hin, sci;
    float total;
    float avg;

    printf("enter roll no: ");
    scanf("%d", &roll);
    printf("enter marks in english: ");
    scanf("%f", &eng);
    printf("enter marks in maths: ");
    scanf("%f", &hin);
    printf("enter marks in science: ");
    scanf("%f", &sci);
    total = eng + sci + hin;
    avg = total / 3.0;
    printf("\n\nroll no is: %d", roll);
    printf("\nmarks in english is: %.2f", eng);
    printf("\nmarks in hindi are: %.2f", hin);
    printf("\nmarks in science is: %.2f", sci);
    printf("\nTotal is: %.2f", total);
    printf("\nAverage is: %.2f", avg);
    if ((avg > 40) && (eng >=33) && (sci >=33) && (hin >=33))

    {
        printf("\nPASS");
    }
    else
    {
        printf("\nFAIL");
    }

    return 0;
}
