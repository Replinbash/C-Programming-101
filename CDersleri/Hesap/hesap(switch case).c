#include <stdio.h>
#include <stdlib.h>
#include <conio.h>


int main()
{

// *5'le çarp 100 böl. --> Kar Zarar Formülü
// s1*(100-1)/100) --> %1 indirim formülü
// s1*(100-5)/100) --> %5 indirim formülü
// s1*(100-10)/100) --> %10 indirim formülü
// s1*(100-25)/100) --> %25 indirim formülü

float s1,s2;
int secim;

printf("Itemlerin Kar Hesabi\n\n");

printf("Harcadiginiz Para: ");
scanf("%f",&s1);
printf("\n");

printf("Item fiyati: ");
scanf("%f",&s2);
printf("\n");

printf("1. yuzde 1\n");
printf("2. yuzde 5\n");
printf("3. yuzde 10\n");
printf("4. yuzde 25\n\n");
donus:
printf("\n");
printf("Indirim oranini seciniz: ");
scanf("%d",&secim);


switch(secim)
{
    
    case 1: printf("Kazanciniz: %1.f TL",(s2-s1)*(100-1)/100);
    printf("\n");
    goto donus;
    break;

    case 2: printf("Kazanciniz: %1.f TL",(s2-s1)*(100-5)/100);
    printf("\n");
    goto donus;
    break;

    case 3: printf("Kazanciniz: %1.f TL",(s2-s1)*(100-10)/100);
    printf("\n");
    goto donus;
    break;

    case 4: printf("Kazanciniz: %1.f TL",(s2-s1)*(100-25)/100);
    printf("\n");
    goto donus;
    break;
    
    default: printf("\n\n1 ile 4 arasinda sayi giriniz.");
    printf("\n");
    goto donus;
    break;
}
getch();
return 0;
}
