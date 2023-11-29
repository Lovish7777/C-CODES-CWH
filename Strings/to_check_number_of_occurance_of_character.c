#include <stdio.h>
int main()
{
    // find the number of occurance of item/ word in an string
    char str[100];
    int i, count = 0;
    char item;
    printf("\nEnter your string: ");
    gets(str);
    printf("\n");
    puts(str);
    printf("\nenter character to find number of occurance: ");
    scanf("%c", &item);

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == item)
        {
            count++;
        }
    }
    printf("\n%c repeats %d times in a string ", item, count);
    return 0;
}