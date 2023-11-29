#include <stdio.h>
int main()
{
    int *ptr;
    int marks[5];
    ptr = marks;
    for (int i = 0; i < 5; i++)
    {
        printf("enter the marks of %d subject: ", i + 1);
        scanf("%d", ptr);
        ptr++;
    }
    for (int i = 0; i < 5; i++)

    {
        printf(" \nThe marks of %d subject: %d ", i + 1, marks[i]);
    }

    return 0;
}