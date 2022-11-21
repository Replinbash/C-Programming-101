#include <stdio.h>
#include <string.h>
#include <conio.h>
//str=string len=uzunluk 
int main() 
{
char kelime[50];
printf("kelimeyi girin: ");
gets(kelime); //scanf bosluktan sonrasını almaz! 

printf("katar uzunlugu: %d",strlen(kelime));


printf("\n'selam dostlar' katar uzunlugu: %d",strlen("selam dostlar")); //katar=veri


getch();
return 0;
}