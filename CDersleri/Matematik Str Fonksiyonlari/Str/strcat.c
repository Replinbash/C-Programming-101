#include <stdio.h>
#include <string.h>
#include <conio.h>
//strcat=kelimeleri birleştirir.
int main() 
{
char marka[30], model[30], bilgisayar[30];

printf("marka ve model giriniz: ");
scanf("%s%s",marka, model);

strcat(bilgisayar,marka);
strcat(bilgisayar," ");
strcat(bilgisayar,model);

printf("\n"); 

printf("%s",bilgisayar);

getch();
return 0;
}