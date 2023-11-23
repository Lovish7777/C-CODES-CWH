#include <stdio.h>
int main()
{
    int i = 5;

    printf("\nthe value after i++ is: %d", i++);
    // i++ , phele print fir increment
    //++i phele increment fir print
    printf("\nthe value after i is :%d", i);
    i += 10; // --> i increment by 10
    printf("\nthe value after i+= 10 is :%d", i);

    return 0;
}