#include<stdio.h>
int main()
{
    int i=5;
    int *ptr;
    int **pptr;
    ptr=&i;
    pptr=&ptr;
    printf("\n%d",*ptr);
    printf("\n%d",*pptr);
    printf("\n%d",**pptr);

return 0;
}