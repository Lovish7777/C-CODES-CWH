#include<stdio.h>
#include<string.h>
typedef struct pokemon
{
    int attack;
    int speed;
    int hp;
    char name[15];


}pokemon;

void change(pokemon *p) // pass by refrence
{
(*p).attack=200;
(*p).hp=120;
strcpy((*p).name,"Raichu");
(*p).speed=150;
    
}
int main()
{
pokemon pikachu;
pikachu.attack=150;
pikachu.speed=110;
pikachu.hp=90;
strcpy(pikachu.name,"pikachu");
pokemon* x= &pikachu;
printf("\npikachu attack:%d" ,pikachu.attack);
printf("\nPikachu speed: %d" ,pikachu.speed);
printf("\npikachu hp   : %d" ,pikachu.hp);
printf("\n pikachu name : %s" ,pikachu.name);
// (*x).hp=70; // bracket is important;
// printf("%d",pikachu.hp);

change(&pikachu);
printf("\npikachu attack:%d" ,pikachu.attack);
printf("\nPikachu speed: %d" ,pikachu.speed);
printf("\npikachu hp   : %d" ,pikachu.hp);
printf("\n pikachu name : %s" ,pikachu.name);




return 0;
}