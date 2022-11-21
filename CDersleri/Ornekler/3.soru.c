#include <stdio.h>
#include <conio.h>

int main() 
{ 
//kış 320 kişi
//ilkbahar 80 kişi (kışın 4 de biri)
//yaz 640 kişi (ilkbaharın 8 katı)
//sonbahar 64 kişi (yazın 10 da biri)
//bu otelde 1 yıl içinde kaç kişi kalmıştır?

int kis,yaz,sonbahar,ilkbahar,toplam;

kis=320;
ilkbahar=kis/4;
yaz=ilkbahar*8;
sonbahar=yaz/10;

toplam=kis+ilkbahar+yaz+sonbahar;

printf("otelde 1 yil icinde kalan kisi: %d",toplam);

getch();
return 0;
}