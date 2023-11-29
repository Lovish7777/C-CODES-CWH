// linear search;
#include <stdio.h>
int main()
{
    int arr[100], n, i, pos, c, item;
    printf("enter number of element in array to be entered(1-100): ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n; i++)
    {
        printf("\t%d", arr[i]);
    }
    printf("\nEnter the item to be search: ");
    scanf("%d", &item);
    for (i = 0; i < n; i++)
    {
        if (arr[i] == item)
        {
            pos = i;
            c = 1;
        }
    }
    if (c == 1)
    {
        printf("\n \nyour item (%d) is in %d place", item, pos + 1);
    }
    else
    {
        printf("\nitem not found");
    }
    return 0;
}