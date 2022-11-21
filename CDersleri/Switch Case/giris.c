#include <stdio.h>
#include <conio.h>

int main()
{

char hafta;

printf("Kod: ");
scanf("%s",&hafta);

switch (hafta)
{
case 'a': printf("P.tesi");    
    break;
case 'b': printf("Sali");    
    break;
case 'c': printf("Carsamba");    
    break;
case 'd': printf("Persembe");    
    break;
case 'e': printf("Cuma");    
    break;
case 'f': printf("C.tesi");    
    break;
case 'h': printf("Pazar");    
    break;

default: printf("Hatali Giris!");
    break;
}


getch();
return 0;
}

