#include <stdio.h>
#include <conio.h>

int main()
{
  
int i;
for(i=0; i<=10; i++)
{
  if(i==5) continue;  //dönüde 5. sayiyi atliyor.
  
  printf("%d ",i);

}

getch();
return 0;
}
