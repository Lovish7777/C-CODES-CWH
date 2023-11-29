#include<stdio.h>
#include<string.h>
int main()
{
struct book
{
char name[15];
int pages;
float price;
}b1,b2,b3;

// b1.name= "sectre seven"; error;
///////////////////////book 1 ///////////////////////////////
strcpy(b1.name,"secret seven");
b1.pages = 150;
b1.price = 500.5;

printf("\n\nName of book 1 is :%s",b1.name);
printf("\nNumber of pages in book 1 is: %d",b1.pages);
printf("\nPrice of book 1 is %.2f",b1.price);

///////////////////book 2/////////////////////////////////
strcpy(b2.name,"Solo Levling");
b2.pages = 250;
b2.price = 500.52;

printf("\n\nName of book 2 is :%s",b2.name);
printf("\nNumber of pages in book 2 is: %d",b2.pages);
printf("\nPrice of book 2 is %.2f",b2.price);

///////////////////book 3//////////////////////////////////
strcpy(b3.name,"pradeep");
b3.pages = 1200;
b3.price = 1020;

printf("\n\nName of book 3 is :%s",b3.name);
printf("\nNumber of pages in book 3 is: %d",b3.pages);
printf("\nPrice of book 3 is %.2f",b3.price);

return 0;
}