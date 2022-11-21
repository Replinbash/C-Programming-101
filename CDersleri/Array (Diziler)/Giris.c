#include <stdio.h>
#include <conio.h>

int main()
{

/*int teksayilar[]={1,3,5,7,9};

printf("%d",teksayilar[3]);/*


/*char sehir[]={'a','n','k','a','r','a'};

printf("%c",sehir);*/

    char soyad[10];         // Bir karakter dizisi tanimlayalim //
    soyad[0] = 'B';
    soyad[1] = 'A';
    soyad[2] = 'Y';
    soyad[3] = 'R';
    soyad[4] = 'A';
    soyad[5] = 'K';
    soyad[6] = 'T';
    soyad[7] = 'A';
    soyad[8] = 'R';
    soyad[9] = 0;             // Bos karakter - stringin sonu //
    printf("Soyadi %s dir. \n",soyad);
    printf("Icinden bir karakter: %c\n",soyad[2]);
    printf("Soyadinin bir parcasi: %s \n",&soyad[3]);


getch();
return 0;
}

