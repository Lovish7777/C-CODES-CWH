
// pass value to function
#include<stdio.h>
int sum(int,int);    
int main()
{
int c;
c=sum(5,2);   // 2 and 3 are arguments jo hm value dete h
printf("\n sum is: %d",c);  // arguments are Actual.
return 0;


}   


int sum(int a, int b)    // a,b are parameters
{

    int result;      
    result=a+b;        // in this domain a and b are different 
                       // as compare to main function
    return result;     // and 5,2 stores in a,b;



}


