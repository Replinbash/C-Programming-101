#include <stdio.h>
#include <conio.h>

int main()
{

int i,toplam=0;

  for (i=0; i<=10; i++) 
  {
       if (i%2==1)  continue; //Bu döngüde tek sayıların tersi olarak çift sayıları topluyor.
       
       toplam+=i;
       
  }
printf("%d",toplam);

getch();
return 0;
}
