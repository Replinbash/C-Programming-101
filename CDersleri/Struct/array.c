#include<stdio.h>
#include<conio.h>
//3 tane profil olusturma
struct ogrenci
{
    char adsoyad[20];
    int no;
    float ort;
}bilgi[3];

int main()
{	

for(int i=0; i<3; i++)
{
    printf("ad: ");
    scanf("%s",&bilgi[i].adsoyad);

    printf("no: ");
    scanf("%d",&bilgi[i].no);

    printf("ort: ");
    scanf("%f",&bilgi[i].ort);
}

for(int i=0; i<3; i++)
printf("ad: %s\nno: %d\nort: %.4f\n\n",bilgi[i].adsoyad,bilgi[i].no,bilgi[i].ort);

getch();
return 0;
}