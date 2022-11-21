#include <stdio.h>
#include <stdlib.h>
#include <conio.h>


int main()
{

char kitapadi[10], Yazar[10], SayfaSayisi[3], BasimTarihi[10], BasimEvi[10], Tur[10];

printf("Kitap Adini Giriniz: ");
scanf("%s",kitapadi);

printf("Yazar Adini Giriniz: ");
scanf("%s",Yazar);

printf("Sayfa Sayisini Giriniz: ");
scanf("%s",SayfaSayisi);

printf("Basim Tarihini Giriniz: ");
scanf("%s",BasimTarihi);

printf("Basim Evi: ");
scanf("%s",BasimEvi);

printf("Turunu Giriniz: ");
scanf("%s",Tur);

printf("\n**********************************\n\n\n");

printf("Kitap Adi: %s\nYazar Adi: %s\nSayfa Sayisi: %s\nBasim Tarihi: %s\nBasim Evi: %s\nKitabin Turu: %s\n\n\n**********************************",
kitapadi,Yazar,SayfaSayisi,BasimTarihi,BasimEvi,Tur);


getch();
return 0;
}