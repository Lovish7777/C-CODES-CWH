#include<stdio.h>
void encrypt(char *);
void decrypt( char *);
int main()
{
    char ch[] = "Lovish";
    encrypt(ch);
    printf("\nENCRYPETED string is: %s",ch);
    char ch2[]= "Mpwjti";
    decrypt(ch2);
     printf("\nDECRYPETED string is: %s",ch2);


    return 0;

}
void encrypt(char* ch)
{
    char *ptr=ch;
  
    while(*ptr!='\0')
    {
        *ptr = *ptr+1;
        ptr++;
    }
}
void decrypt( char * ch2)
{
      char *ptr=ch2;
  
    while(*ptr!='\0')
    {
        *ptr = *ptr-1;
        ptr++;
    }
}