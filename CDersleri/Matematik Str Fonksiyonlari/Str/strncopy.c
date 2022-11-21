#include <stdio.h>
#include <string.h>
#include <conio.h>
//strncopy=veriyi karakter sayisina göre kopyalar.
int main() 
{
char kaynak[50]="Hello World";
char kopya[50]="";

strncpy(kopya,kaynak,8);

printf("%s",kopya);

getch();
return 0;
}