#include<stdio.h>
#include<conio.h>

struct Tarih {
		int yil;
		int ay;
		int gun;
	} siz, kiz_kardes, erkek_kardes; // 3 farkli degisken

    /*struct Tarih siz;
	struct Tarih kiz_kardes;
	struct Tarih erkek_kardes;*/ //Böyle de olur.

int main()
{
	printf("Dogum gununuzu giriniz:  ");
	scanf("%d-%d-%d", &siz.gun,&siz.ay,&siz.yil);

	printf("Kiz kardesiniz: ");
	scanf("%d-%d-%d", &kiz_kardes.gun,&kiz_kardes.ay,&kiz_kardes.yil);

	printf("Erkek kardesiniz: ");
	scanf("%d-%d-%d", &erkek_kardes.gun,&erkek_kardes.ay,&erkek_kardes.yil);

    printf("\n\nSizin Dogum gununuz :%d-%d-%d\n\n", siz.gun,siz.ay,siz.yil);

    printf("Erkek Dogum gunu :%d-%d-%d\n\n", erkek_kardes.gun,erkek_kardes.ay,erkek_kardes.yil);

    printf("Kiz Dogum gunu :%d-%d-%d\n\n", kiz_kardes.gun,kiz_kardes.ay,kiz_kardes.yil);

    getch();            
	return 0;
}