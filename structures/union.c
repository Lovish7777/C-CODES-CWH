#include<stdio.h>
#include<string.h>
typedef union pokemon
{
    int attack;
    int speed;
    int hp;
    char name[15];
   }pokemon;

void main(){
pokemon pikachu; 
pikachu.attack=150;
pikachu.speed=110;
pikachu.hp=90;
strcpy(pikachu.name,"pikachu");
printf("\npikachu attack:%d" ,pikachu.attack);
printf("\nPikachu speed: %d" ,pikachu.speed);
printf("\npikachu hp   : %d" ,pikachu.hp);
printf("\n pikachu name : %s" ,pikachu.name);

}