#include <stdio.h>
#include <conio.h>
#include <math.h>
//logaritma
//sayinin log10(sayi) > 10 tabanında
//log2(sayi)> 2tabanında
//log(sayi) > e tabanında logaritmasını alır.
int main() 
{    
double sayi,sonuc;

printf("sayi girin:");
scanf("%lf",&sayi);

sonuc=log10(sayi); 

printf("sonuc: %f",sonuc);


getch();
return 0;
}