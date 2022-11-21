#include <stdio.h>
#include <conio.h>

int main()
{
//Dısarıdan Girilen 2 Matrisin Toplamı
int satir,sutun,i,j;

printf("Toplanicak matrislerin satir sayisi: ");
scanf("%d", &satir);
printf("Toplanicak matrislerin sutun sayisi: ");
scanf("%d", &sutun);

int matris[satir][sutun];
int matris2[satir][sutun];
int sum[satir][sutun];

for (i=0; i<satir; i++)
{
    for (j=0; j<sutun; j++)
    {
        printf("1.matris [%d][%d]-->" ,i+1,j+1);
        scanf("%d", &matris[i][j]);

    }
}

printf("\n");
for (i=0; i<satir; i++)
{
    for (j=0; j<sutun; j++)
    {
        printf("2.matris [%d][%d]-->" ,i+1,j+1);
        scanf("%d", &matris2[i][j]);

    }
}

printf("\nMatrislerin Toplami:\n");
for (i=0; i<satir; i++)
{
    for (j=0; j<sutun; j++)
    {
         sum[i][j]=matris[i][j]+matris2[i][j];
        printf("%d ", sum[i][j]);
    }
    printf("\n");
}

getch();
return 0;
}