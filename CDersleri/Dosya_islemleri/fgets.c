#include <stdio.h>
#include <stdlib.h> 
#include <conio.h>

int main()
{
	FILE *belge;
    char karakter[50];
    belge = fopen("C:\\Users\\Metehan\\Desktop\\CDersleri\\dosya_islemleri\\bilgi4.txt", "r+");
    
    fgets(karakter, 50, belge);
    puts(karakter);
	
	fclose(belge); // işlem yaptığımız dosyayı kapatıyor. 
	getch();
	return 0;
}