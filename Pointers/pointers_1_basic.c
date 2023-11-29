
#include <stdio.h>
int main()
{
    int i = 5;
    int *j;   // declaring a pointer;
    int **k;  // pointer to pointer;
    j = &i;
    k = &j;

    printf("\nthe value of            i is: %d", i);
    printf("\nthe value of address of i is: %u", j);
    printf("\nthe value of address of i is: %u", i);
    printf("\nthe value            of i is: %d", *j);
    printf("\nthe value            of j is: %u", j);
    printf("\nthe value of address of j is: %u", &j);
    printf("\nthe value of address of j is: %u", k);
    printf("\nthe value            of j is: %u", *k);
    return 0;
}