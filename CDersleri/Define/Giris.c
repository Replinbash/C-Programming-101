#include <stdio.h>
#include <conio.h>
#define sosyal_kat 2.48  //ön-işlemci komutu. Prgogram derlenmeden önce çalışır. Verilen değerler sabit olup globaldir. 
#define fen_kat 1.75
// sosyal ve fen netlerin kat puanını alan ve yazdiran program.
float SosyalHesap (int puan, int puan2)
{
    return puan*sosyal_kat+puan2*fen_kat+50.25;
}

float FenHesap (int puan, int puan2)
{
    return puan2*fen_kat+puan*sosyal_kat+51.45;
}
int main()
{ 
    float s1, s2, result, result2;
    printf("Sosyal Netinizi giriniz: ");
    scanf("%f", &s1);
    printf("Fen Netinizi giriniz: ");
    scanf("%f", &s2);

    result=SosyalHesap(s1, s2);
    result2=FenHesap(s1, s2);

    printf("Sosyal Puaniniz: %.2f - ", result);
    printf("Fen Puaniniz: %.2f", result2);

    getch();
    return 0;
}