#include <stdio.h>
#include <conio.h>


int main()
{
// 1,5,9,13.....41 kadar olan sayıların toplamı

int sayac=0,i,b;

printf("Sayi Giriniz: ");
scanf("%d",&b);

for(i=1;i<=b;i+=4)
{
    sayac=sayac+i;
}
    printf("%d\n",sayac);

getch();
return 0;
}
