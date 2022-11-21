#include <stdio.h>
#include <conio.h>


int main()
{
// 1,5,9,13.....41 kadar olan sayıların toplamı

int sayac=0,i,b,c,d;

printf("Baslangic deger: ");
scanf("%d",&b);

printf("Son Deger: ");
scanf("%d",&c);

printf("Artis Miktari: ");
scanf("%d",&d);

for(i=b;i<=c;i+=d)
{
    sayac=sayac+i;
}
    printf("Toplam: %d\n",sayac); 

getch();
return 0;
}
