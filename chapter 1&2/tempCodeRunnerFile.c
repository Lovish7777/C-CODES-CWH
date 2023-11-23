// wap of file handling thats prints its own content
// write a c program to compare two file printing first line where they differ and program should take name of file as command line argument;
// Wap in c which printd its own code;
#include<stdio.h>
int main()
{
FILE *f;
char ch;
f=fopen("HCF.c","r");

while(1)
{
    ch=fgetc(f);
    if(f==EOF)
    {
        break;

    }
    printf("\n%c",ch);
}
fclose(f);

    return 0;
}