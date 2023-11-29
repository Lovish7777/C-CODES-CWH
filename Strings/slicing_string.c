// to stlice a string: 
#include<stdio.h>
void slice(char * ,int ,int );

int main()
{
char ch[]= "lovish";
slice(ch,1,6);
printf("\n%s",ch);
return 0;
}


void slice(char *ch ,int start,int end)
{
int i=0;
while((start+i)<end)
{
ch[i]=ch[i+start];

    i++;
}
ch[i]='\0';


}