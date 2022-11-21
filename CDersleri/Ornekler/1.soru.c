#include <stdio.h>
#include <conio.h>

int main()
{
/* 
Fix Değerler Bagaj: 15kg , El: 8kg
Kg başına : 5 TL fazla ödenecek.
Örnek:
Bagaj: 18 kg   
El : 9 kg 
4 Kg fazlalık var 
4*5=20 TL
*/
int bagaj,el,toplam,s1,s2;

bagaj=15;
el=8;
toplam=bagaj+el;

printf("Bagaj Kg Giriniz: ");
scanf("%d",&s1);

printf("El Kg Giriniz: ");
scanf("%d",&s2);

if ( (s1+s2)>=toplam )
{
    printf("Fazladan Odenen Tutar: %d TL",(s1+s2-toplam)*5);
}

else if ( (s1+s2)<toplam )
{   
    printf("Fazladan Odenen Tutar: 0 TL");
}
getch();
return 0;
}