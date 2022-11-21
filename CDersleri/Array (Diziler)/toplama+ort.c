#include <stdio.h>
#include <conio.h>

int main()
{
//Toplamı ve Ortalaması

int i,x,y=0;

int sayilar[100];

printf("eleman sayisi: ");
scanf("%d",&x);

for (i=0;i<x;i++)
{
    printf("Girdiginiz elemanlarin degerini giriniz: ",i+1);
    scanf("%d",&sayilar[i]);
     y=y+sayilar[i];
}

printf("sayilarin toplami %d\n",y);
printf("sayilarin ort. %d",(y/i));

getch();
return 0;
}
