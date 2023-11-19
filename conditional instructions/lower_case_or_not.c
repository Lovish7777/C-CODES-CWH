#include<stdio.h>
int main()
{
    char ch;
    printf("enter  any single character :  ");
    scanf("%c",&ch);
    printf("\ncharacter = %c",ch);
    
    if(ch<=122 && ch>=97)
    {
        printf("\nits lower case");
    }
else
   {
        printf("\nits not lower case");
    }


}


