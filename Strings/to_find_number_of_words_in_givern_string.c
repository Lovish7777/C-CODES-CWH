#include<stdio.h>
int main()
{

char ch[500];
char *ptr = ch;

int count=0;
printf("\nEnter string: ");
gets(ch);
puts(ch);

while(*ptr!='\0')
{
  if(*ptr== ' ')
  {
    printf("");
  }
  else
  {
    count++;
  }
     ptr++;
}
printf("\ntotal number of words: %d",count);
return 0;
}