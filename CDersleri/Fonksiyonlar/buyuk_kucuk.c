#include <stdio.h>
#include <conio.h>
//girilen iki sayidan hangisi daha büyük fonksiyonu.
void buyuk_kucuk(int sayi, int sayi2)
{
    if(sayi > sayi2)
    {
        printf("1.sayi daha buyuk");
    }
    else
    {
        printf("2.sayi daha buyuk");
    }
}

int main()
{ 
    int s1,s2;

    printf("1.sayiyi girin: ");
    scanf("%d", &s1);
    printf("2.sayiyi girin: ");
    scanf("%d", &s2);
    
    buyuk_kucuk(s1, s2);

    getch();
    return 0;
}