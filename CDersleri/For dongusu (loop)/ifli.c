#include <stdio.h>
#include <conio.h>


int main()
{
// Terim sayısı çift mi tek mi hesabı

int i,a,b,c,sayac=0;

printf("ilk degeri giriniz: ");
scanf("%d",&a);

printf("son degeri giriniz: ");
scanf("%d",&b);

printf("artis miktarini giriniz: ");
scanf("%d",&c);

for(i=a;i<=b;i+=c)
{
    sayac=sayac+i;
}
    printf("\nCikan sayi: %d\n",sayac);
    if(sayac%2==0)
    {
    printf("Sayi cifttir");
    }
    else
    {
    printf("sayi tektir");
    }


getch();
return 0;
}
