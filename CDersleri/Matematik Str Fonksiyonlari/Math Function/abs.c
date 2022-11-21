#include <stdio.h>
#include <conio.h>
#include <math.h>
//mutlak deger
int main() 
{    
double sayi,sonuc;

printf("sayi girin:");
scanf("%lf",&sayi);

sonuc=fabs(sayi); //floating absolute

printf("sonuc: %.f",sonuc);


getch();
return 0;
}