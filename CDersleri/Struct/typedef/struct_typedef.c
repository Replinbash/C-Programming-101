#include<stdio.h>
#include<string.h>
#include<conio.h>
//Struct yapılarında da kullanılabilir.
typedef struct silkroad
{
   char wizard[40];
   char warrior[40];
   float damage;
    
}ch;

int main()
{
ch char1,char2; //2 yeni degisken 

printf("wizard nick: ");
scanf("%s",&char1.wizard);

printf("wizard damage: ");
scanf("%f",&char1.damage);

printf("warrior nick: ");
scanf("%s",&char2.warrior);

printf("warrior damage: ");
scanf("%f",&char2.damage);

if(char1.wizard>char2.warrior)
{
    printf("\n\nWizard Win! \nnick: %s - damage: %.2f",char1.wizard,char1.damage);
}
else if(char2.warrior>char1.wizard)
{
    printf("\n\nWarrior Win! \nick: %s - damage: %.2f",char2.warrior,char2.damage);
}
else
{
    printf("HATA!");
}
getch();
return 0;
}