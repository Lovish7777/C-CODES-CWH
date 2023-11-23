#include <stdio.h>
void goodmorning();
void goodafternoon();
void goodnight();

int main()
{

    goodmorning();
}
void goodmorning()
{
    printf("\n good morning");
    goodafternoon();
}
void goodnight()
{
    printf("\n Good night");
}
void goodafternoon()
{

    printf("\n good afternoon");
    goodnight(); // function inside function
}