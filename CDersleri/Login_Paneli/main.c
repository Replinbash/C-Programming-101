#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>
#include <unistd.h>
#include <conio.h>
// Login Paneli
//---------------------------------------//
struct login
{
	char kullanici_Adi[50];
	int secim, sifre, sifre_tekrar;

} giris, kayit;
FILE *bilgiler;
//---------------------------------------//
// NOT!: Sadece 1 defa kayıt olunabilir.

void giris_yap()
{
	printf("Kullanici Adi: ");
	scanf("%s", &giris.kullanici_Adi);

	printf("Sifre: ");
	scanf("%d", &giris.sifre);

	bilgiler = fopen("C:\\Users\\Metehan\\Desktop\\CDersleri\\Login_Paneli\\log.txt", "r");
	fscanf(bilgiler, "%s %d", &kayit.kullanici_Adi, &kayit.sifre);
	fclose(bilgiler);

	if (strcmp(giris.kullanici_Adi, kayit.kullanici_Adi) == 0 && giris.sifre == kayit.sifre)
	{
		printf("Giris Basarili..\n\n");
		int main();
	}
	else
	{
		printf("Girdiginiz kullanici adi ya da sifre yanlis.\n\n");
		int main();
	}
}

void kayit_ol()
{
	bilgiler = fopen("C:\\Users\\Metehan\\Desktop\\CDersleri\\Login_Paneli\\log.txt", "a");

	printf("Kullanici Adi: ");
	scanf("%s", &kayit.kullanici_Adi);

	printf("Sifrenizi giriniz: ");
	scanf("%d", &kayit.sifre);

	printf("Sifrenizi tekrar giriniz: ");
	scanf("%d", &kayit.sifre_tekrar);

	fprintf(bilgiler, "%s %d\n", kayit.kullanici_Adi, kayit.sifre);
	fclose(bilgiler);

	if (kayit.sifre == kayit.sifre_tekrar)
	{
		printf("Kayit Basarili. Giris yapabilirsiniz.\n\n");
		int main();
	}
	else
	{
		printf("Girilen sifreler eslesmiyor. Tekrar deneyin.\n\n");
		kayit_ol();
	}
}

int main()
{
	while (1)
	{
		printf("1.Giris Yap\n2.Kayit Ol\n3.Cikis\n");
		scanf("%d", &giris.secim);

		if (giris.secim == 1)
			giris_yap();

		else if (giris.secim == 2)
			kayit_ol();

		else if (giris.secim == 3)
			exit(EXIT_SUCCESS);

		else
			printf("Hata!\n");
	}
	getch();
	return 0;
}