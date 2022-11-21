#include <stdio.h>
#include <string.h>
#include <conio.h>
// Dizi elemanlarını büyükten Küçüğe sıralama
int main() 
{
    int array[50], a;

    for(int i = 1; i <= 5; i++)
    {
        printf("%d.sayiyi girin: ",i);
        scanf("%d", &array[i]);
    }
    for (int i = 1; i<= 5; i++)
    {
		for(int j = i + 1; j <= 5; j++)
        {
            if(array[j] > array[i])
            {
            a = array[i];
            array[i] = array[j];
            array[j] = a;
            }
        }
	}
    printf("\nsiralama:\n");
	for (int b = 1; b <= 5; b++) 
    {
		printf("%d ", array[b]);
	}

    getch();
    return 0;
}