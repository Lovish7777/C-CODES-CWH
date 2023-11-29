#include<stdio.h>


typedef struct pokemon
{
int attack;
int health;
int speed;
}pokemon;

void fun(pokemon p){
 
printf("pokemon p attack is: %d",p.attack);

}
int main()
{
    pokemon pikachu;
    pikachu.attack=100;
    pikachu.health=90;
    pikachu.speed=120;
    fun(pikachu);
return 0;
}