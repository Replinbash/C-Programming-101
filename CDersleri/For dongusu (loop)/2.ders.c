#include <stdio.h>
#include <stdlib.h>
#include <conio.h>


int main()
{
// n sayısına kadar olan sayıların toplamı

int i,sayac=0;

for (i=1;i<=10;i++)

sayac=sayac+i;

printf("sayac: %d",sayac);


getch();
return 0;
}
