#include <stdio.h>
#include <stdlib.h>
#include <conio.h>


int main()
{

int kalem=8;
int silgi=3;
int uc=2;
int Tkalem=5;
int s1,s2,s3,s4,sonuc;

printf("Almis oldugunuz kirtasiye esyalari \n\n-----------------------------------\n\n\n");

printf("Aldiginiz kalem adedini giriniz: ");
scanf("%d",&s1);

printf("Aldiginiz silgi adedini giriniz: ");
scanf("%d",&s2);

printf("Aldiginiz uc adedini giriniz: ");
scanf("%d",&s3);

printf("Aldiginiz tukenmez kalem adedini giriniz: ");
scanf("%d",&s4);

sonuc=(kalem*s1)+(silgi*s2)+(uc*s3)+(Tkalem*s4);
printf("Toplam Tutariniz: %d TL'dir.",sonuc);



getch();
return 0;
}