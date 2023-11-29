#include<stdio.h>
float average(float, float, float);
int  main()

{
      float a,b,c,d;
    printf("enter 3 numbers to find avg :");
    scanf("%f%f%f",&a,&b,&c);
    printf("Average of %.2f, %.2f and %.2f is: \n",a,b,c);
    d=average(a,b,c);
    printf("%.2f",d);

return 0;
}

float average(float x,float y,float z)
{
    float A;
    A= (x+y+z)/3.0;
    return A;
    }