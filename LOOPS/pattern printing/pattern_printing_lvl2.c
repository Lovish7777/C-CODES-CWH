/*
   *  --- *
  **  --  **
 ***  -   ***
****      ****
*/
#include<stdio.h>
int main()
{
    int i,j,n,s;
    printf("enter number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        // inner loop for spaces
        for(s=n-1;s>=i;s--)
        {
            printf(" ");

        }
        // inner loop for stars
        for(j=1;j<=i;j++){
        printf("*");
        }
        printf("\n");
    }


for(i=1;i<=n;i++)
    {
        // inner loop for spaces
        for(s=1;s<=n;s++)
        {
            printf(" ");

        }
        // inner loop for stars
        for(j=1;j<=i;j++){
        printf("*");
        }
        printf("\n");
    }

return 0;
}