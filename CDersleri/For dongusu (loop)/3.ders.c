#include <stdio.h>
#include <conio.h>


int main()
{
// 1,5,9,13.....41 kadar olan sayıların toplamı

int sayac=0,b,i;

for(i=1;i<=41;i+=4)
{
    sayac=sayac+i;   
}
printf("%d\n",sayac);

getch();
return 0;
}
