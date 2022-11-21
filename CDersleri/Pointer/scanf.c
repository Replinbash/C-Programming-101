#include<stdio.h>
#include<conio.h>
// bu programın amacı bir degiskenin adresini baska bir degiskene atamak.
int main()
{
int sayi,*h;

printf("sayi girin: ");
scanf("%d",&sayi);

h=&sayi;

printf("sayi %d - adresi: %x",sayi,h);

getch();
return 0;
}