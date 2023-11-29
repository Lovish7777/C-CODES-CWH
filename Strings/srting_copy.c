#include <stdio.h>
#include <string.h>
int main()
{
    char *str1[40];
    char ch[40];
    printf("enter string: ");
    gets(str1);
    puts(str1);
    int a = strlen(str1);
    printf("\n length of string is: %d", a);
    strcpy(ch, str1); // (jisme copy krna h, jisko copy krnsa h);
    printf("\n");
    puts(str1);
    return 0;
}