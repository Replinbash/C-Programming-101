#include<stdio.h>
#include<conio.h>

//Sayının tek veya cift olmasını  kontrol eder.
void tek_mi_cift_mi(int sayi) //girilen_sayi sayi degiskenine esit oldu. 
{
	if( sayi%2 == 0 )
		printf("%d, cift bir sayidir.\n", sayi);
	else
		printf("%d, tek bir sayidir.\n", sayi);
}

int main()
{
	int girilen_sayi;
	printf("Lutfen bir sayi giriniz: ");
	scanf("%d", &girilen_sayi);
	tek_mi_cift_mi(girilen_sayi); //girilen_sayi degeri 'sayi' degiskenine gönderiliyor. girilen_sayi int degiskense fonksiyondaki de int olacak.

    getch();
    return 0;
}