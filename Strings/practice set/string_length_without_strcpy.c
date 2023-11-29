#include <stdio.h>
#include <string.h>

int length(char *ptr)
{
    char *st = ptr;
    int len = 0;
    while (*ptr != '\0')
    {
        len++;
        ptr++;
    }
    return len;
}

int main()
{
    char ch[] = "lovish";
    int l = length(ch);
    printf("\nLength of string is: %d", l);

    return 0;
}