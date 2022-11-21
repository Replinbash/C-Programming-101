#include <stdio.h>
#include <conio.h>

int main()
{
// Girilen Sayinin toplami tek ve çift durumu

int sayi[10];
int i,x=0,y=0;

printf("10 tane sayi girin: ");
for(i=0; i<10; i++)
{
    scanf("%d",&sayi[i]);
    {
        if(sayi[i]%2==0)
        {
            x+=sayi[i];
        }
        else if(sayi[i]%1==0)
        {
            y=sayi[i]+y;
        }
    }

}
printf("toplam: %d\n",y+x);
printf("cift sayilarin toplami: %d\n",x);
printf("tek sayilarin toplami: %d",y);

getch();
return 0;
}