// nesteing in structure
#include<stdio.h>
#include<string.h>
int main()
{
typedef struct pokemon   
{
    int hp;
    int speed;
    int attack;
    char tier;
}pokemon;
typedef struct legedary
{
    pokemon normal;
    int ability;
     
}legendary;
 pokemon pikachu;
pikachu.attack= 60;       
pikachu.hp =100;
pikachu.speed=120;
pikachu.tier = 'B';

printf("\nPikachu Attack is: %d",pikachu.attack);
printf("\nPikachu Hp is: %d",pikachu.hp);
printf("\nPikachu Speed is: %d",pikachu.speed);
printf("\nPikachu Tier is: %c",pikachu.tier);

 struct pokemon Charizard;

Charizard.attack= 100;       
Charizard.hp =150;
Charizard.speed=80;
Charizard.tier = 'A';

printf("\n\nCharizard Attack is: %d",Charizard.attack);
printf("\nCharizard Hp is: %d",Charizard.hp);
printf("\nCharizard Speed is: %d",Charizard.speed);
printf("\nCharizard Tier is: %c",Charizard.tier);

legendary mewoth;
mewoth.normal.attack= 100;       
mewoth.normal.speed=80;
mewoth.normal.tier = 'A';
mewoth.ability=250;




printf("\n\nmewoth Attack is: %d",mewoth.normal.attack);
printf("\nmewoth Hp is: %d",mewoth.normal.hp);
printf("\nmewoth Speed is: %d",mewoth.normal.speed);
printf("\nmewoth Tier is: %c",mewoth.normal.tier);


return 0;
}