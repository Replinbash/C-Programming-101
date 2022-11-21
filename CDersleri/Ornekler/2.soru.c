#include <stdio.h>
#include <conio.h>

int main() 
{
//"Girilen iki sayi arasindaki sayilarin toplamini bulan program.    
int s1,s2,i,toplam=0;

printf("1.sayiyi girin: ");
scanf("%d",&s1);

printf("2.sayiyi girin: ");
scanf("%d",&s2);

if(s1==s2)
{
    printf("farkli sayi girin.");
}
else if(s1!=s2)
{
    for(i=s1;i<=s2;i++)
    {
        toplam+=i;
    }
printf("Girilen iki sayi arasindaki sayilarin toplami: %d",toplam);
}

getch();
return 0;
}