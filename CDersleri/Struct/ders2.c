#include<stdio.h>
#include<conio.h>

struct ogrenci
{
    char adsoyad[20];
    int no;
    float ort;
}bilgi;

int main()
{	

printf("Ad Soyad: ");
gets(bilgi.adsoyad);

printf("no: ");
scanf("%d",&bilgi.no);

printf("ort: ");
scanf("%f",&bilgi.ort);

printf("\n\n");

puts(bilgi.adsoyad);
printf("no: %d\n",bilgi.no);
printf("ort: %f",bilgi.ort);


getch();
return 0;
}