#include <stdio.h>
int main()
{
    int arr[3][3], i, j, trans[3][3];

    printf("enter elements of matrix: ");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("\nOrignal matrix is: \n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("\t%d", arr[i][j]);
        }
        printf("\t\n\t\n");
    }

    printf("\nTranspose of matrix is :\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            trans[i][j] = arr[j][i];
            printf("\t%d", trans[i][j]);
        }
        printf("\t\n\t\n");
    }

    return 0;
}