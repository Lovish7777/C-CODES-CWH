// calculate area of circle ND volume

#include <stdio.h>
int main()
{
    float pi = 3.14;
    float r;
    printf(" enter radius: ");
    scanf("%f", &r);
    printf("\nArea of cicrle is: %.2f", pi * r * r);
    float h;
    printf("\nenter hieght: ");
    scanf("%f", &h);
    printf("\nVolume of cylinder is: %.2f", pi * r * r * h);
}