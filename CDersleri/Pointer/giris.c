#include<stdio.h>
#include<conio.h>
//Pointer = İşaretçiler, bilgisayar belleğindeki belli bir adresin, genellikle bir değişkene ait,
//kaydedildiği ve kaydedilen bellek adresine doğrudan erişim sağlayan değişkenlerdir.
//adres operatörü= & = ampersand 
int main()
{	
int sayi=15;
int sayi2=20;
double sayi3=55.25;
char harf='c';

printf("\nDegiskenler\n\n");

printf("sayi1 degiskeni: %d\n",sayi);
printf("sayi2 degiskeni: %d\n",sayi2);
printf("sayi3 degiskeni: %lf\n",sayi3);
printf("harf degiskeni: %c",harf);

printf("\n\nDegiskenlerin Bellekteki Adresi\n\n");

printf("sayi1 degiskenin adresi: %x\n",&sayi); //%x ile yazılmasının sebebi address değerinin hexadecimal(On altılı sayı sistemi) bir değer olmasından kaynaklı
printf("sayi2 degiskenin adresi: %x\n",&sayi2);
printf("sayi3 degiskenin adresi: %x\n",&sayi3);
printf("harf degiskenin adresi: %x",&harf);

getch();
return 0;
}