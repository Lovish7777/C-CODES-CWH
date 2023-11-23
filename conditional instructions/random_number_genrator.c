// random number
#include <stdio.h>
#include <stdlib.h>    // for random number
#include <time.h>        

int main()

{

    int n;
    srand(time(0));
    n = rand() % 100 + 1; // if we want that ramdom number is between 1-100
    printf("\nrandom number is : %d", n);
    return 0;
}