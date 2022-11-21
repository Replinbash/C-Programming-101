#include <stdio.h>
#include <stdlib.h> //dosya islemleri icin bu makro gerekiyor.
#include <conio.h>

int main()
{
	FILE *dosya;    //dosya isimli adres belirliyoruz.
    dosya = fopen("C:\\Users\\Metehan\\Desktop\\CDersleri\\Dosya_islemleri\\deneme.txt", "w");
    // "//" bunu kullanmaktaki sebep \n gibi komutları kullanabilmek için.
    //"w" write yani yazdir komutu.
    //fopen dosyayı aç.
    
	getch();
	return 0;
}