#include <stdio.h>
#include <conio.h>
#include <math.h>
//virgüllü sayiyi üste veya alt değere yuvarlayan program.
//ceil=tavan floor=zemin
//double="lf"
int main() 
{
double s1,sonuc,sonuc2;

printf("sayi girin: ");
scanf("%lf",&s1);

sonuc=floor(s1);
sonuc2=ceil(s1);

printf("floor: %.f\n",sonuc); //printf de double için %f kullanabilirsin.(scanf haric.)
printf("ceil: %.f",sonuc2); //.f sayiyi küsüratsiz yapar.

getch();
return 0;
}