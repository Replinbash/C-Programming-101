#include <stdio.h>
#include <stdlib.h>
#include <conio.h>


int main(){

// *5'le çarp 100 böl. --> Kar Zarar Formülü
// s1*(100-1)/100) --> %1 indirim formülü
// s1*(100-5)/100) --> %5 indirim formülü
// s1*(100-10)/100) --> %10 indirim formülü
// s1*(100-25)/100) --> %25 indirim formülü

float s1,s2,s3;

printf("Itemlerin Kar Hesabi\n");

printf("\n\nHarcadiginiz Para: ");
scanf("%f",&s1);
printf("\n");

printf("Item fiyati: ");
scanf("%f",&s2);
printf("\n");

printf("1. yuzde 1\n");
printf("2. yuzde 5\n");
printf("3. yuzde 10\n");
printf("4. yuzde 25\n\n");
while (1){
printf("\n\nIndirim Oranini Seciniz: ");
scanf("%f",&s3);


if(s3==1)
{
    printf("Kazanciniz: %1.f TL",(s2-s1)*(100-1)/100);
}
else if(s3==2)
{
    printf("Kazanciniz: %1.f TL",(s2-s1)*(100-5)/100);
}
else if(s3==3)
{
    printf("Kazanciniz: %1.f TL",(s2-s1)*(100-10)/100);
}
else if(s3==4)
{
    printf("Kazanciniz: %1.f TL",(s2-s1)*(100-25)/100);
}
else
{
    printf("1 ile 4 arasinda sayi giriniz.");
}
}

getch();
return 0;
}
