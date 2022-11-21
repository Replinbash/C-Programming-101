#include <stdio.h>
#include <stdlib.h> 
#include <conio.h>

int main()
{
	FILE *belge;
    belge = fopen("C:\\Users\\Metehan\\Desktop\\CDersleri\\dosya_islemleri\\bilgi.txt", "w");
    
	putc('a', belge); //putc chardan geliyor.
	putc('k', belge);
	putc('\t', belge);
	putc('4', belge);
	putc('7', belge); 
	
	fclose(belge); // işlem yaptığımız dosyayı kapatıyor. 


	getch();
	return 0;
}