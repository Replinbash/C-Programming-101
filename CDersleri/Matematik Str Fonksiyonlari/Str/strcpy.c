#include <stdio.h>
#include <string.h>
#include <conio.h>
//strcopy=cümleyi diğer değişkene kopyalar.
int main() 
{
char kaynak[50]="selam dostlar";
char kopya[50]="";

strcpy(kopya,kaynak);

printf("%s",kopya);

getch();
return 0;
}