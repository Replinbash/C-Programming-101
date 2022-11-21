#include <stdio.h>
#include <conio.h>

int main() 
{
//3 basamakli sayinin rakamlarinin toplami 
int sayi,yuzler,onlar,birler,toplam;

printf("3 basamakli sayi girin: ");
scanf("%d",&sayi);

yuzler=sayi/100;
onlar=(sayi/10)%10;
birler=sayi%10;
toplam=yuzler+onlar+birler;

printf("Girilen 3 basamakli sayinin rakamlarinin toplami: %d",toplam);
getch();
return 0;
}