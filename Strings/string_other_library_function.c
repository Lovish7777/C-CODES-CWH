#include <stdio.h>
#include <string.h>
int main()
{
    char st1[50] = "Hello ";
    char st2[50] = "wolrd";
    strcat(st1, st2); // string concatination
    // strcat(st1,st2)    jo bhi st1 ki jgh hoga whi print m ayega:
    printf("\n%s", st1);
    int val = strcmp(st1, st2);
    printf("\n%d", val);
    return 0;
}