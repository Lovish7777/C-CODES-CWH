#include <stdio.h>
int main()
{
    char *ptr = "lovish";
    // ptr="Harry bhai"; error
    ptr = "Luffy"; // with pointer its not error;
    printf("%s", ptr);

    return 0;
}