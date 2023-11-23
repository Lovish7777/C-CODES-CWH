#include <stdio.h>
int main()
{
    int i, n;
    int a = 0;
    int b = 1;
    int c;
    printf("enter number of terms: ");
    scanf("%d", &n);
    printf("\n\nfibonacci sesies upto %d is: ", n);
    printf("\n%d", a);

    for (i = 0; i <= n; i++)

    {

        a = b;
        b = c;
        c = a + b;
        printf("\n%d", c);
    }

    return 0;
}