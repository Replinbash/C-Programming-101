#include<stdio.h>
#include<conio.h>
// arttırma ve azaltma işlemi.
int main()
{

char harf='i',*pt;

pt=&harf;

printf("%x\n",pt); // 61ff1b

pt++;

printf("%x\n",pt); // 61ff1c

pt--;

printf("%x\n",pt); // 61ff1b

pt+=5;

printf("%x\n",pt); // 61ff20

getch();
return 0;
}