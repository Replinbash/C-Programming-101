#include <stdio.h>
#include <conio.h>

int main()
{

// 3 basamaklı sayıyı basamaklarına ayıran program
// % = sayinin örneğin 10 a bölümünden kalan sayi 

int sayi;

printf("Sayi giriniz: ");
scanf("%d,",&sayi);

printf("Yuzler Basamagi: %d\nOnlar Basamagi: %d\nBirler Basamagi: %d",(sayi/100),(sayi/10)%10,(sayi%10));

getch();
return 0;
}

