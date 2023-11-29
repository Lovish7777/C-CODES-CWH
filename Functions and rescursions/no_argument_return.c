#include <stdio.h>
int perimeter();
int main()
{
    int a;
    a = perimeter();
    printf("\n Perimeter of rectangle is : %d", a);
    return 0;
}
int perimeter()
{
    int l, w, z;
    printf("enter length of rectangle: ");
    scanf("%d", &l);
    printf("enter width of rectangle: ");
    scanf("%d", &w);
    z = 2 * l * w;
    return z;
}