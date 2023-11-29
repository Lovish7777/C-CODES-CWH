#include<stdio.h>
// void printarray(int *ptr, int n);
void printarray(int , int );

int main()
{
int arr[]={ 1,2,3,4,5,6,7,8};
printarray(arr,8);
printf("\n3rd element after change is:  %d",arr[2]);

return 0;
}
// void printarray(int *ptr, int n)
// {
//     int i;
//     for(i=0;i<n;i++)
//     {
//     printf("\nArray is: %d\n",*(ptr+i));
//     ptr[2]=5555;


//  }
// }

void printarray(int prt[], int  n)  // without pointer
{
      int i;
    for(i=0;i<n;i++)
{
    printf("\nArray is: %d\n",ptr[i]);
 ptr[2]=5555;
}
}