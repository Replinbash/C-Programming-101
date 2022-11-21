#include <stdio.h>
#include <conio.h>
int main()
{
//veri tiplerinin bilgisayarda ne kadar bitlik yer kapladigini gosterir .
	printf("long: %d\n", sizeof(long));
	printf("short: %d\n",sizeof(short));
	printf("int: %d\n", sizeof(int));
	printf("float: %d\n", sizeof(float));
	printf("double: %d\n", sizeof(double));
	printf("char: %d\n", sizeof(char));
	
    getch();
	return 0;
}