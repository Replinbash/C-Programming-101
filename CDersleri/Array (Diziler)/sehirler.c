#include <stdio.h>
#include <conio.h>

int main()
{

char i;
char sehirler[10][10][10];

for (char i=0;i<3;i++)
{
    printf("sehiri giriniz: ");
    scanf("%s",sehirler[i]);
}

for (i=0;i<3;i++)
{
printf("\n%s\t",sehirler[i]);
}

getch();
return 0;
}