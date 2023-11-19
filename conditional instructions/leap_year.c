#include <stdio.h>
int main()
{
    int yrs;
    printf("enter year\n");
    scanf("%d", &yrs);
    if (yrs % 4 == 0)
    {
        printf("\n%d is leap year", yrs);
    }
    else
    {
        printf("\n%d is leap not year", yrs);
    }
    return 0;
}