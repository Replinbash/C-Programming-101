#include <stdio.h>
#include <conio.h>
#include <math.h>
//karekok bulan program.
int main() 
{
int sayi;
double sonuc;

printf("almak istediginiz sayinin karesini girin: ");
scanf("%d",&sayi);

sonuc=sqrt(sayi);
printf("sonuc: %.2f",sonuc);

getch();
return 0;
}