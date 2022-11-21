#include <stdio.h>
#include <conio.h>


int main(){
// Klavyeden Girlen Matris Deegerleri
int satir,sutun,i,j;

printf("satir degerini giriniz: ");
scanf("%d", &satir);

printf("sutun degerini giriniz: ");
scanf("%d", &sutun);

int matris [satir][sutun];

for (i=0; i<satir; i++)
{
    for (j=0; j<sutun; j++)
    {
        printf("\n[%d][%d] --->", i+1, j+1);
        scanf("%d", &matris[i][j]);
    }
}
printf("\nMatrisler:\n\n");

for (i=0; i<satir; i++)
{
    for (j=0; j<sutun; j++)
    {
        printf("%d ", matris[i][j]);
    }
    printf("\n");
}
getch();
return 0;
}

