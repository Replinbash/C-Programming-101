#include <stdio.h>
#include <stdlib.h> 
#include <conio.h>

int main()
{
	FILE *belge;
    char veri[50]="Bilgisayar ";
    char veri2[50]="Muhendisligi ";
    char veri3[50]="Bolumu";

    belge = fopen("C:\\Users\\Metehan\\Desktop\\CDersleri\\dosya_islemleri\\bilgi3.txt", "w+"); //'w+' Okuma ve yazma için bir metin dosyası oluşturur.
    
    fputs(veri, belge);
    fputs(veri2, belge);
    fputs(veri3, belge);

    fclose(belge);
	getch();
	return 0;
}