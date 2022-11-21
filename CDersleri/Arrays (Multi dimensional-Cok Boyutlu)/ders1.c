#include <stdio.h>
#include <conio.h>


int main()
{
// Matrisler
int diziler[2][2]; // 2 ye 2 sütun oluştuluyor.

diziler[0][0]=10;   // 0 sütundaki 0 satır değeri 10
diziler[0][1]=20;   // 0 sütundaki 1 satır değeri 20
diziler[1][0]=30;   // 1 sütundaki 0 satır değeri 30
diziler[1][1]=40;   // 1 sütundaki 1 satır değeri 40

printf("0 sutundaki 0 satir degeri %d, 0 sutundaki 1 satir degeri %d\n",diziler[0][0],diziler[0][1]);
printf("1 sutundaki 0 satir degeri %d, 1 sutundaki 1 satir degeri %d\n",diziler[1][0],diziler[1][1]);

getch();
return 0;
}

