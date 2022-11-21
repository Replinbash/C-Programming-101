#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
//tek mi çift mi progarmı
int main()
{ 
int a;

printf("bir sayi giriniz: ");
scanf("%d",&a);
    
if(a%2==0)
    {
     printf("cift sayi");
	}
 else
    {
     printf("tek sayi");
    }

 getch();
return 0;
}