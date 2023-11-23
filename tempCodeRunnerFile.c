#include<stdio.h>
#include<math.h>
int areasquare(int);

int main()
{int c;
    int s;
    printf("enter side: ");
    scanf("%d",&s);
    c=area(s);
   printf("\nArea is: %d",c);

return 0;
}
int areasquare(int s)
{
int c;
c=pow(s,2);
return c;

}

