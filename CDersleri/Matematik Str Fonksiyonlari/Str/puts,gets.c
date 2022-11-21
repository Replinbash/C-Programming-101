#include <stdio.h>
#include <conio.h>
// gets= almak puts=koymak
//puts ve gets scanf den farkı veriyi cümle olarak alır.
int main() 
{
char bilgi[50];

printf("bilgiyi girin: ");
gets(bilgi);

printf("\n\n");

puts(bilgi);


getch();
return 0;
}