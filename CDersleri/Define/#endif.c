#include <stdio.h>
#include <conio.h>
//Koşula bağlı derleme
#define MAK01 20
#define MAK02 50

int main(void)
{
  #if MAK01<MAK02
     printf("MAK01 degeri MAK02 degerinden kucuktur.\n");
     printf("MAK01 degeri: %d\n", MAK01);
	 printf("MAK02 degeri: %d", MAK02);
  #endif

  // Aşağıda yer alan işlem satırları derleyici tarafından derlenmez.
  #if MAK01>MAK02
     printf("MAK01 degeri MAK02 degerinden buyuktur.\n");
     printf("MAK01 degeri: %d\n", MAK01);
	 printf("MAK02 degeri: %d", MAK02);
  #endif
  
  getch();
  return 0;
}
