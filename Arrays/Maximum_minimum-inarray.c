#include <stdio.h>
int main()
{
    // find maximum minimum in array
    int arr[100], i, n;
    int max, min;

    printf("enter number of element to be entered:  ");
    scanf("%d", &n);
    if (n > 100)
    {
        printf("\nArray limit exceeds: ");
    }
    else
    {

        printf("\nenter array elements: ");
        for (i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }
        max = arr[0];
        min = arr[0];

        printf("\nArray elements are: ");
        for (i = 0; i < n; i++)
        {
            {
                printf("\n%d", arr[i]);
            }

            if (arr[i] > max)
            {

                max = arr[i];
            }
            else if (min > arr[i])
            {
                min = arr[i];
            }
        }

        printf("\nMaximum number in array is: %d", max);
        printf("\nMinimum number in array is: %d", min);
        return 0;
    }
}