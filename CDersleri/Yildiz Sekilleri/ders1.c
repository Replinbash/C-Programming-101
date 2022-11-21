#include <stdio.h>
#include <conio.h>


int main()
{

int i,j;

for(i=1;i<=5;i++)
{

    for(j=1;j<=3;j++)
    {
        printf("*");
    }
    printf("\n");
}

getch();
return 0;
}

/*
for(i=1;i<=5;i++)
{

    for(j=i;j==i;j++)
    {
        printf("**");
    }
    printf("\n");
}
*/
