#include <stdio.h>
#include <conio.h>
//Array kullanılarak girilen sayilarin kaçı çift kaçı tek.
int limit;
void tek_cift(int dizi[50])
{
    int tek=0, cift=0;
    for(int i=1; i<=limit; i++)
    {
        if(dizi[i]%2==0)
        {
            tek++;
        }
        else
        {
            cift++;
        }
    }
    printf("Girilen Cift Sayilarin Adeti: %d\n",tek); 
    printf("Girilen Tek Sayilarin Adeti: %d",cift); 
}
int main()
{
    int array[50];
    
    printf("kac sayi girilecek?: ");
    scanf("%d",&limit);

    for(int i=1; i<=limit; i++)
    {
        printf("%d.sayiyi girin: ",i);
        scanf("%d",&array[i]);
    }
    
    tek_cift(array);
    getch();
    return 0;
}