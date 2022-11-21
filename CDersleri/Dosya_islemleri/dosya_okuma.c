#include <stdio.h>
#include <stdlib.h> 
#include <conio.h>

int main()
{
	FILE *belge;
    char karakter;

    belge = fopen("C:\\Users\\Metehan\\Desktop\\CDersleri\\dosya_islemleri\\bilgi2.txt", "r"); //'r' yani okutma.

    do  //While içindeki şart sağlandığı sürece do komutunun altındakileri yap demiş oluyor.
    {
    karakter=getc(belge);

    printf("%c",karakter);
    }
    while (karakter!=EOF); //karakter degiskeni End of File -dosyanın sonuna kadar gelince- islemden cıkıs yap.
    
    /*while (karakter!=EOF)
    {
    karakter=getc(belge);

    printf("%c",karakter);
    }*/

	fclose(belge); 
	getch();
	return 0;
}