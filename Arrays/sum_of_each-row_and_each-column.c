#include <stdio.h>
int main()
{
    int arr[3][3], i, j, rowsum , colsum;
    int   uppertriangularsum=0, lowertriangularsum=0;
    printf("enter elements of matrix: ");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("\t%d", arr[i][j]);
        }
        printf("\t\n\t\n");
    }

    for (i = 0; i < 3; i++)
    {

        rowsum = 0;
        for (j = 0; j < 3; j++)
        {
            rowsum = rowsum + arr[i][j];
        }
        printf("\nsum of row %d is %d", i + 1, rowsum);
    }

    // colum sum we first use inner loop i.e for column and the  outer loop as inner
    for (j = 0; j < 3; j++)
    {
        colsum = 0;
        for (i = 0; i < 3; i++)
        {
            colsum = colsum + arr[i][j];
            
        }
        printf("\nsum of column is :%d is %d", i + 1, colsum);
    }
    int diagonalsum=0;
    // for diagnol element i==j;
    // so sum of diognal element is :
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(i==j)
            {
                diagonalsum= diagonalsum+arr[i][j];
            }
        }
    }
    printf("\nSum of diagonal matrix element is: %d",diagonalsum);
    // for uppertriangular matrix;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(j>i)
            {
                uppertriangularsum = uppertriangularsum + arr[i][j];
            }
        }
    }
    printf("\nSum of upper triangular matrix element is: %d",uppertriangularsum); //uppertiangularsum
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(i>j)
            {
                 lowertriangularsum =  lowertriangularsum + arr[i][j];
            }
        }

    }
    printf("\nSum of upper triangular matrix element is: %d",lowertriangularsum);
    
    return 0;
}