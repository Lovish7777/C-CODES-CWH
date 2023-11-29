#include<stdio.h>
#include<string.h>
int main()
{
    typedef struct pokemon
    {
        int  hp;
        int attack;
        char  tier;
        int  speed;
        char name[20];
    } pokemon;

    pokemon arr[3];
    arr[0].attack=100;
    arr[0].speed=110;
    arr[0].hp=150;
    arr[0].tier= 'A';
    strcpy(arr[0].name,"Pikachu");
  
    arr[1].attack=150;
    arr[1].speed=130;
    arr[1].hp=150;
    arr[1].tier= 'S';
     strcpy(arr[2].name,"Mewoth");

    arr[2].attack=110;
    arr[2].speed=150;
    arr[2].hp=150;
    arr[2].tier='S';
     strcpy(arr[2].name,"Charizard");

    for(int i = 0;i<3;i++)
    {
        printf("\n\nName of %d pokemon is  %s",i+1,arr[i].name);
        printf("\nAttack of %d pokemon is: %d",i+1,arr[i].attack);
        printf("\nspeed  of %d pokemon is: %d",i+1,arr[i].speed);
        printf("\nHp     of %d pokemon is: %d",i+1,arr[i].hp);
        printf("\nTier   of %d pokemon is :%c",i+1,arr[i].tier);
    }


return 0;
}