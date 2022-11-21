#include<stdio.h>
#include<conio.h>
// bu programın amacı bir degiskenin adresini baska bir degiskene atamak.
int main()
{	
 int *ip1, *ip2, id1, id2;

  ip1 = &id1; // id1 degiskeninin adresini ip1 isaretcisine atama
  ip2 = &id2; // id2 degiskeninin adresini ip2 isaretcisine atama
  id1 = 42;   // id1 degiskenine deger atama
  *ip2 = 67;  // id2 degiskenine ip2 isaretcisi yoluyla deger atama

  printf("id1 degiskeninin degeri: %d\n", *ip1);
  printf("id2 degiskeninin degeri: %d\n", *ip2);
  printf("id1 degiskeninin bellek adresi: %x\n", ip1);
  printf("id2 degiskeninin bellek adresi: %x", ip2);

  printf("\n\n");

  printf("ip1 isaretcisinin bellek adresi: %x\n", &ip1);
  printf("ip2 isaretcisinin bellek adresi: %x", &ip2);

getch();
return 0;
}