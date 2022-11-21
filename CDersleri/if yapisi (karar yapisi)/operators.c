#include <stdio.h>
#include <stdlib.h>
#include <conio.h>


int main()
{

// Mod Alma -->%
// Ve --> &&
// Veya -->||
// Eşittir --> ==
// Eşit Değildir --> !=

int s1,s2,s3,p1,ort;

printf("****Ogrenci Ortalama****\n\n");

printf("1.Sinav notunu giriniz: ");
scanf("%d",&s1);

printf("2.Sinav notunu giriniz: ");
scanf("%d",&s2);

printf("3.Sinav notunu giriniz: ");
scanf("%d",&s3);

printf("Proje notunu giriniz: ");
scanf("%d",&p1);
ort=(s1+s2+s3+p1)/4;

if(ort<=49)
{
    printf("ort: %d --> ff",ort);
}
else if(ort>=50 && ort<=59)
{
    printf("ort: %d --> dd",ort);
}
else if(ort>=60 && ort<=69)
{
    printf("ort: %d --> cc",ort);
}
else if(ort>=70 && ort<=84)
{
    printf("ort: %d --> bb",ort);
}
else if(ort>=85 && ort<=100)
{
    printf("ort: %d --> a",ort);
}
else
{
    printf("0 ile 100 arasinda sayi giriniz.");
}

getch();
return 0;
}
