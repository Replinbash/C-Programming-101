#include <stdio.h>
#include <conio.h>

int main()
{
// 1 ile 20 arasındaki çift sayıları listeleyen ama 14 sayısını listelemeyen c komutunu yazın.

int i=1;
while (i<=20)
{
     if(i%2==0 && i!=14)
     {
     printf("%d\n",i);
     }
i++;
}

getch();
return 0;
}

