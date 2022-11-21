#include <stdio.h>
#include <conio.h>

int main()
{

int i,x,faktor=1;

printf("faktoriyelini almak istedigin sayiyi giriniz: ");
scanf("%d",&x);

int sayilar[]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};

for (i=0;i<x;i++)
{
    faktor=faktor*sayilar[i];

}
printf("sayinin faktoriyeli: %d",faktor);

getch();
return 0;
}