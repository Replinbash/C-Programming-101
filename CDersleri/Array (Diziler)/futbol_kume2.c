#include <stdio.h>
#include <conio.h>
//3 galibiyet + 4 maglubiyet + 3 beraberlik
//küme düsmemesi için 12 puan gerek
//Galibiyet=3Puan Mağlubiyet=0Puan Beraberlik=1Puan
//takımın küme düşüp düşmediğini hesaplayan program
int main() 
{

int i,sayac=0;
int dizi[12];

for(i=0;i<1;i++)
{
printf("Galibiyet sayisini giriniz: ");
scanf("%d", &dizi[i]);
sayac+=dizi[i]*3;

printf("Maglubiyet sayisini giriniz: ");
scanf("%d", &dizi[i]);
sayac+=dizi[i]*0;

printf("Beraberlik sayisini giriniz: ");
scanf("%d", &dizi[i]);
sayac+=dizi[i]*1;
}

if(sayac==12 || sayac>12)
{
    printf("%d puanla ligdesiniz",sayac);
}
else
{
    printf("%d puanla kume dustunuz",sayac);
}

getch();
return 0;
}