#include <stdio.h>
#include <conio.h>
//Struct ve Fonkisyon kullaranak yapilmis hesap makinesi.
struct hesap
{
    float s1,s2,sonuc;

}arti, eksi, bol, carp;

void toplam()
{
    
    printf("\n1.sayiyi girin: ");
    scanf("%f",&arti.s1);
    
    printf("2.sayiyi girin: ");
    scanf("%f",&arti.s2);

    arti.sonuc=arti.s1+arti.s2;

    printf("sonuc: %.2f\n\n",arti.sonuc);

}
void cikarma()
{

    printf("\n1.sayiyi girin: ");
    scanf("%f",&eksi.s1);
    
    printf("2.sayiyi girin: ");
    scanf("%f",&eksi.s2);

    eksi.sonuc=eksi.s1-eksi.s2;

    printf("sonuc: %.2f\n\n",eksi.sonuc);

}
void bolme()
{
    printf("\n1.sayiyi girin: ");
    scanf("%f",&bol.s1);
    
    printf("2.sayiyi girin: ");
    scanf("%f",&bol.s2);

    bol.sonuc=bol.s1/bol.s2;

    printf("sonuc: %.2f\n\n",bol.sonuc);

}
void carpma()
{
    printf("\n1.sayiyi girin: ");
    scanf("%f",&carp.s1);
    
    printf("2.sayiyi girin: ");
    scanf("%f",&carp.s2);

    carp.sonuc=carp.s1*carp.s2;

    printf("sonuc: %.2f\n\n",carp.sonuc);

}

int main()
{
    int secim;
    while(1){
    printf("1.Toplama\n2.Cikarma\n3.Bolme\n4.Carpma\n");
    scanf("%d",&secim);

    if(secim==1)
        toplam();

    else if (secim==2)
        cikarma();

    else if(secim==3)
        bolme();

    else if(secim==4)
        carpma();

    else
        printf("Hata!\n");

    }
    getch();
    return 0;
}