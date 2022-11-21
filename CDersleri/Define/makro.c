#include <stdio.h>
#include <conio.h>
#define maksimum(s1, s2) (s1 > s2) ? s1 : s2
//(s1, s2) degiskenler
//(s1 > s2) şartı
//? Büyük mü (sorgulama)
//s1 : s2 büyükse s1 yazdır aksi durumda s1 yazdır.
int main()
{ 
    printf("%d",maksimum(5, 7));

    getch();
    return 0;
}