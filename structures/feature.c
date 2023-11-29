#include<stdio.h>
#include<string.h>
int main()
{
    typedef struct pokemon   // struct initilization;
{
    int hp;
    int speed;
    int attack;
    char tier;  // A,B,C,D;
}pokemon;

pokemon a,b,c;
a.attack=100;
a.hp    =500;
a.speed =150;
a.tier  ='A';

// b.attack=a.attack;
// b.speed=a.speed;
// b.tier=a.tier;
// b.h=a.hp;

// to copy attributes of a in b;
b=a;
printf("%d",b.attack);




return 0;
}