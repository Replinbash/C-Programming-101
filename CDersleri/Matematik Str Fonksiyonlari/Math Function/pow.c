#include <stdio.h>
#include <conio.h>
#include <math.h>
//sayinin üssünü bulan program.
int main() 
{
int x,y;
float sonuc;

printf("taban: ");
scanf("%d",&x);

printf("us: ");
scanf("%d",&y);

sonuc=pow(x,y);
printf("sonuc: %.2f",sonuc);

getch();
return 0;
}