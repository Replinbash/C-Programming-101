#include <stdio.h>
#include <stdlib.h>
#include <conio.h>


int main()
{

// Dikdortgen Cevresi:  2*(Uzunkenar+kisaKenar)
// Dikdortgen Alani: Uzunkenar*kisakenar

float uzunkenar,kisakenar,cevre,alan;

kisakenar=28,3;
uzunkenar=40;

cevre= 2*(uzunkenar+kisakenar);
alan= uzunkenar*kisakenar;

printf("Dikdortgenin Cevresi: %f\n",cevre);
printf("Alanin Cevresi: %f",alan);

getch();
return 0;
}