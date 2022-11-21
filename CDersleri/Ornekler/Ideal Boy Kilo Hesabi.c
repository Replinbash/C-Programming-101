#include <stdio.h>
#include <stdlib.h>
#include <conio.h>


int main()
{

//Ideal Boy Kilo Hesabi
//(boy - 100 +yas / 10  )*0,8 --> Kadinlar  0,9 ----> Erkekler


float boy,yas,kideal,eideal;

printf("Boy Kilo Hesabi\n\n");

printf("Boy: ");
scanf("%f",&boy);

printf("Yas: ");
scanf("%f",&yas);

kideal=(boy-100+yas/10)*0.8;
eideal=(boy-100+yas/10)*0.9;

printf("(Kadin)Ideal Kilonuz: %.2f\n",kideal);
printf("(Erkek)Ideal Kilonuz: %.2f",eideal);


getch();
return 0;
}