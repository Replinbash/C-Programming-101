#include <stdio.h>
#include <conio.h>

int main()
{
// Girilen sayiya 2 ekle
int sayilar[10];
int i,limit;

printf("kac sayi girilecek?: ");
scanf("%d", &limit);

for (i = 0; i<limit; i++)
{
    printf("sayi gir: ");
    scanf("%d",&sayilar[i]);
    sayilar[i]+=2;
}
for (i = 0; i<limit; i++)
{
    printf("%d\n",sayilar[i]);
}


getch();
return 0;
}