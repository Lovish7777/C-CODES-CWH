#include<stdio.h>
int main()
{
char str1[50];
char str2[50];
int i=0;
char c;
printf("\nenter 1st string :");
scanf("%s",str1);
printf("\nEnter second string character by character: ");


while(c!='\n')
{
    fflush(stdin);
    scanf("%c",&c);
   
    str2[i]=c;
    i++;
}
str2[i]='\0';
printf("\nthe value of st1 is %s\n",str1);
printf("\nthe value of st2 is %s\n",str2);


return 0;
}