#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>
#include <unistd.h>
#include <conio.h>
// Turn Based Game
int main()
{
int health=50,mob=50;
int i,x,l,y;

system("COLOR A");
printf("\n\t\t\t***--******--******--***TURN BASED GAME***--******--******--***\n\n");
sleep(1);

    for(i=0;i<=health;i++)
{

        printf("\nDusman sana vurdu! KAC HASAR YEDIN?= ");
        scanf("%d",&x);
        health=health-x;

        if(health>=41 && health<=49)
        {
            printf("Health: %d \nDurumun iyi!!",health);
        }
        else if(health>=31 && health<=40)
        {
            printf("Health: %d \nDurumun Fena Degil",health);
        }
        else if(health>=21 && health<=30)
        {
            printf("Health: %d \nCanin azaliyor dikkatli ol!!",health);
        }
        else if(health>=11 && health<=20)
        {
            printf("Health: %d \nCanin cok az kaldi can potu bul!!!",health);
        }
        else if(health>=1 && health<=10)
        {
            printf("Health: %d \nDikkat et oluceksin!!!!",health);
        }
        else if(health<=0)
        {
            printf("OLDUN!!!\n");
            break;
        }
   
       for(l=health;l<=mob;l++)
    {
        printf("\nDusmana saldirdin! KAC VURDUN= ");
        scanf("%d",&y);
        mob=mob-y;

        if(mob>=41 && mob<=49)
        {
        printf("Enemy Health: %d \nDusmanin Durumu iyi!!",mob);
        }
        else if(mob>=31 && mob<=40)
        {
        printf("Enemy Health: %d \nDusmanin Durumu Fena Degil",mob);
        }
        else if(mob>=21 && mob<=30)
        {
        printf("Enemy Health: %d \nCani Azaliyor Devam et!!",mob);
        }
        else if(mob>=11 && mob<=20)
        {
        printf("Enemy Health: %d \nCani cok az kaldi Saldirr!!!",mob);
        }
        else if(mob>=1 && mob<=10)
        {
        printf("Enemy Health: %d \nNeredeyse Olucekk!!!!",mob);
        }
        else if(mob<=0)
        {
        printf("DUSMAN OLDU :)\n");
            break;
        }
    }
}
 
getch();
return 0;
}

