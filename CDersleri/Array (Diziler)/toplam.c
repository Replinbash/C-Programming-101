#include <stdio.h>
#include <conio.h>

int main()
{

// Sayilarin Toplami

int sayi[]={1,2,3,4,5,6,7};

int toplam=0,i;

for (i=0; i<7; i++)
{
    toplam=toplam+sayi[i];
}
printf("%d",toplam);

getch();
return 0;
}