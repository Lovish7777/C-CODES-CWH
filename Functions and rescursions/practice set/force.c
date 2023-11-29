#include<stdio.h>
float force(float,float);
int main()
{
    float mass,a;
    const float g=9.8;
    printf("enter mass of object in Kg: ");
    scanf("%f",&mass);

    printf("\nMass is: %.2f Kg \nAccelration due to gravity is: %.2f m/s2",mass,g);
   a = force(mass ,g);
   printf("\nForce is: %.2f N",a);

return 0;
}
float force(float x, float y)
{
 float force;
 force=y*x;
 return force;


}