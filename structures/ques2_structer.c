#include<stdio.h>
int main()
{
    typedef struct date
    { 
int date;
int month;
int year;

}time;

time a,b;
a.date=25;
a.month=5;
a.year=2001;

b.date=25;
b.month=5;
b.year=2001;

if(a.date == b.date && a.month==b.month && a.year==b.year)
{
    printf("\nDates are equal");
}
else
{
    printf("\nDates are not equal");
}

return 0;


}