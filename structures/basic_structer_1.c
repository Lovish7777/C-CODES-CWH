#include<stdio.h>
int main()
{
struct pokemon   // struct initilization;
{
    int hp;
    int speed;
    int attack;
    char tier;  // A,B,C,D;
}pikachu,Charizard;    // write name of pokemon before semicolon


// struct pokemon pikachu;

pikachu.attack= 60;       // . operator
pikachu.hp =100;
pikachu.speed=120;
pikachu.tier = 'B';

printf("\nPikachu Attack is: %d",pikachu.attack);
printf("\nPikachu Hp is: %d",pikachu.hp);
printf("\nPikachu Speed is: %d",pikachu.speed);
printf("\nPikachu Tier is: %c",pikachu.tier);

// struct pokemon Charizard;

Charizard.attack= 100;       // . operator
Charizard.hp =150;
Charizard.speed=80;
Charizard.tier = 'A';

printf("\n\nCharizard Attack is: %d",Charizard.attack);
printf("\nCharizard Hp is: %d",Charizard.hp);
printf("\nCharizard Speed is: %d",Charizard.speed);
printf("\nCharizard Tier is: %c",Charizard.tier);


return 0;








}