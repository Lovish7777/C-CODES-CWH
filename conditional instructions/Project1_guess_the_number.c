// project 1
// Make a game to guess a random_number ;
#include <stdio.h>
#include <stdlib.h>    // for rand()
#include <time.h>

int main()
{
    int i, n, pos, count = 1;
    int random;
    srand(time(0));
    random = rand() % 100 + 1;   // % 100 because we need random number between 1-100
   
    do
    {

        printf("\n\nguess the number between (1-100) :--> ");
        scanf("%d", &n);
        printf("\nYour guessed number is: \n%d", n);
       
        if (n > random)
        {
            printf("\n Lower number please");
        }
        else if (n < random)
        {
            printf("\nHigher number please");
        }

        else
        {
            printf("\nYou guessed in : %d attempts", count);
        }
        count++;
       

    } 
    while (n != random);

    return 0;
}
