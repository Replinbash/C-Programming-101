#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
// sabit degiskenler program tarafindan degistirilmez mesela pi sayisi hep 3.14 tur. Ve sabit degiskenlerin veri turu kisitlamasi yoktur her turlu veri tipinde degisken tanimlayabiliriz.
//‘const’ anahtar kelimesi ile
//‘#define’ onislemci bildirimi ile
#define SIZE 10 

int main()
{
	const int BOYUT = 10; 
	char dizi1[BOYUT];
	char dizi2[SIZE];
	printf("Adinizi ve soyadinizi giriniz: ");
	scanf("%s", dizi1);
	//gets_s(dizi1, BOYUT);
	printf("merhaba %s, sitemize hosgeldiniz..\n", dizi1);

	getch();
	return 0;
}