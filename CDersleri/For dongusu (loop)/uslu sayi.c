#include <stdio.h>
#include <conio.h>


int main()
{
//Üslü Sayi Bulma
//5^3=5.5.5=125
int i,sayi,us,sonuc=1;

printf("sayiyi giriniz: ");
scanf("%d",&sayi);
printf("us degerini giriniz: ");
scanf("%d",&us);

    for(i=1;i<=us;i++)
{ 
        sonuc=sonuc*sayi;
        printf("%d\n",sonuc);
}

getch();
return 0;
}

