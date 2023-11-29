#include<stdio.h>
int convert(float );
int main()
{
    float c,f,a;
    printf("enter temperature in celcius: ");
    scanf("%f",&c);
    a=convert(c);
    printf("\n Temperature in farenhiet is : %.2f ",a);


return 0;
}
int convert( float x)
{
     float y = x * (9.0/5.0) + 32;

    return y;
}