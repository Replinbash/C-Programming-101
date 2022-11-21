#include <stdio.h>
#include <conio.h>

int main() 
{

char kitap[50];

printf("kitap: ");
scanf("%s",&kitap);
printf("\n\n");

printf("%10s",kitap); //%10s 10 karaktere tamamlıyor. Eger kelime 10 harf değilse boşlukla tamamliyor.
printf("\n\n");

printf("%10.4s",kitap); //.f olduğu gibi kelimeyi kısaltıyor.
printf("\n\n");


printf("%-10.3s",kitap); //kelimeyi sağdan eksiltiyor. 
printf("\n\n");

getch();
return 0;
}