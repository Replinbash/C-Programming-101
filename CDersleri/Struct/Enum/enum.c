#include <stdio.h>
#include <conio.h>
//Enum Yapısı sıralandırma yapar.
//birden fazla şart için kullanılabilir.
enum sehirler // yazılanlar numarayla sıralanıyor. örn: adiyaman= 2
{adana=1/*adana 1 olarak tanımlarsa diğerleri ona göre sıralanıyor.*/,adiyaman,afyon,agri,amasya,ankara,antalya,aydin,artvin,balikesir,bilecik};

int main() 
{
int i;

enum sehirler il;
il=afyon;

printf("%d\n\n",il); // afyon 3 sırada olduğu için 3 yazdırcak.

for (i = adana; i < balikesir; i++) //1 dan başlayıp 9 a kadar numaralandırılıyor.
{
    printf("%d ",i); 
}

getch();
return 0;
}