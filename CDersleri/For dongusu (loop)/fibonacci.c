#include <stdio.h>
#include <stdlib.h>
#include <conio.h>


int main()
{


//fibonacci 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377, 610, 987 

int a=1,b=1,c,i;

printf("%d\n",a);
printf("%d\n",b);

for(i=1;i<=8;i++)
{
c=a+b;
a=b;
b=c;

printf("%d\n",c);

}
getch();
return 0;
}
