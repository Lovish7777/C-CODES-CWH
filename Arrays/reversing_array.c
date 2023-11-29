#include <stdio.h>
void reverse(int *arr, int n)
{
    int temp, i;
    for (i = 0; i < (n / 2); i++)
    {
        temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
    }
}

int main()
{
    int arr[10], i;

    printf("enter number of elements: ");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < 10; i++)
    {
        printf("\n%d", arr[i]);
    }

    reverse(arr, 10);
    printf("\n Reversed array is: ");
    for (i = 0; i < 10; i++)
    {
        printf("\n%d", arr[i]);
    }

    return 0;
}
