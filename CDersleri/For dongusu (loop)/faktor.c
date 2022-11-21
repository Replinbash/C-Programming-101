#include <stdio.h>
#include <conio.h>


int main()
{
// faktöriyel bulma 

int i,sayi,faktor=1;

printf("sayi giriniz: ");
scanf("%d",&sayi);

for(i=1;i<=sayi;i++)
{
faktor=i*faktor;
}
printf("%d!= %d",sayi,faktor);

getch();
return 0;
}
