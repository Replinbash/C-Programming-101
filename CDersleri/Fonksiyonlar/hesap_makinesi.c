#include<stdio.h>
#include<conio.h>
//Basit Hesap Makinesi Örnegi
float toplam(float sayi1, float sayi2)
{
    float sonuc;
    sonuc=sayi1+sayi2;
    return sonuc;  
}

float fark(float sayi1, float sayi2)
{
    return sayi1-sayi2;   
}

float carpim(float sayi1, float sayi2)
{
    return sayi1*sayi2;;  
}
float bolum(float sayi1, float sayi2)
{
    return sayi1/sayi2;  
}

int main()
{   
    while(1){
    float s1,s2;

    printf("1.sayiyi girin: ");
    scanf("%f",&s1);
    printf("2.sayiyi girin: ");
    scanf("%f",&s2);
    
    printf("Sayi 1: %.2f\n",s1);
    printf("Sayi 2: %.2f\n",s2);
    printf("Toplam: %.2f\n",toplam(s1, s2));
    printf("Fark: %.2f\n",fark(s1, s2));
    printf("Carpim: %.2f\n",carpim(s1, s2));
    printf("Bolum: %.2f\n\n",bolum(s1, s2));   
    }
    
    getch();
    return 0;
}