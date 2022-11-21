#include <stdio.h>
#include <conio.h>

//4 sayinin toplamini dizi, while, for kullanarak programlayin.
int main() 
{
int i, dizi[4], toplam=0;

i=1;
while(i<=4)
{
    printf("%d. sayi girin: ",i);
    scanf("%d",&dizi[i]);
    i++;
}
for(i=1; i<=4;i++)
{
    toplam+=dizi[i];
}
printf("toplam: %d",toplam);

getch();
return 0;
}