#include <stdio.h>
#include <conio.h>
// Do Döngüsü : Döngü 1 kez de olsa çalışır.
int main()
{
int id=2;

do
{
    printf("%d",id++);
} 
while (id>3); //id=2 3 ten küçük olduğu halde 1 kez çalıştı.

getch();
return 0;
}

