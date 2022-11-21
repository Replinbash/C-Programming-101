#include<stdio.h>
#include<string.h>
#include<conio.h>

struct steam 
{
    char ad[30];
    float fiyat;
}game[3];

int main()
{
int i;
for (i=0; i<3; i++)
{
printf("ad: ");
scanf("%s",&game[i].ad);

printf("fiyat: ");
scanf("%f",&game[i].fiyat);
}
for (i=0; i<3; i++)
printf("\nOyun Adi: %s\nOyun Fiyati: %.4f\n\n",game[i].ad,game[i].fiyat);


getch();
return 0;    
}