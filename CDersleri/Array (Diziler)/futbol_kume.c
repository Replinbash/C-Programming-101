#include <stdio.h>
#include <conio.h>
//3 galibiyet + 4 maglubiyet + 3 beraberlik
//küme düsmemesi için 12 puan gerek
//Galibiyet=3Puan Mağlubiyet=0Puan Beraberlik=1Puan
//10 haftada takımın küme düşüp düşmediğini hesaplayan program
int main() 
{

int i,toplam=0,skor[10]={2,1,0,0,2,1,1,2,0,0};

for (i=0; i<10; i++)
{
    if(skor[i]==2)
    {
        toplam+=3;
    }
    else if(skor[i]==1)
    {
        toplam+=1;
    }

}
if (toplam==12 || toplam>12)
{
    printf("%d puanla ligi gectin", toplam);
}
else
{
    printf("%d puanla kume dustun", toplam);
}


getch();
return 0;
}