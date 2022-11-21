#include <stdio.h>
#include <conio.h>

int main()
{


int sayi,sayi2;

printf("iki sayi gir: ");
scanf("%d%d",&sayi,&sayi2);

if(sayi>sayi2)
{
    printf("Buyuk sayi: %d",sayi);
}
else if (sayi==sayi2)
{
    printf("iki sayi da esit",sayi2);
}

else if(sayi<sayi2)
{
    printf("Buyuk sayi: %d",sayi2);
}

getch();
return 0;
}