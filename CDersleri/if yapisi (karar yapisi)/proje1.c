#include <stdio.h>
#include <stdlib.h>
#include <conio.h>


int main()
{

int s1,s2,s3,ort;

printf("Sinav Ortalamasi\n\n");

printf("1.Sinav Notu: ");
scanf("%d",&s1);

printf("2.Sinav Notu: ");
scanf("%d",&s2);

printf("3.Sinav Notu: ");
scanf("%d",&s3);

ort=(s1+s2+s3)/3;

if(ort>=50)
{
    printf("\nTebrikler %d ortalamayla sinifi gectiniz :)",ort);
}
else
{
    printf("\nMaalesef %d ortalamayla sinifi gecemediniz :(",ort);
}
getch();
return 0;
}
