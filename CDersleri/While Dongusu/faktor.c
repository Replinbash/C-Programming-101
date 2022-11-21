#include <stdio.h>
#include <conio.h>

int main()
{

// 5 sayısının faktörünü bulan while programı.

int i=5,faktor=1;

while(i>1)
{
    faktor=faktor*i;
    i--;
}
printf("5!= %d",faktor);

getch();
return 0;
}

