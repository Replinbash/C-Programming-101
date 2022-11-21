#include <stdio.h>
#include <conio.h>

// Klavyeden girlen boy değeri ile dik üçgen oluşturma
int main()
{

int i,j,taban;

printf("taban degerini giriniz: ");
scanf("%d",&taban);

for(i=1;i<=taban;i++)
{
    for(j=1;j<=i;j++)
    {
        printf("*");
    }
    printf("\n");
}


getch();
return 0;
}


