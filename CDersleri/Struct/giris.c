#include<stdio.h>
#include<conio.h>
//Yapı(struct), farklı veri türlerini bir grup altında toplayan kullanıcı tanımlı bir veri türüdür.
//İki veya daha fazla elemandan oluşur. Bir yapı içindeki bütün veri tipleri aynı olabileceği gibi, her veri türü birbirinden farklı da olabilir.

struct ogrenci {
    char ad[20];
    char soyad[20];
    int no;
    float ort;
}bilgi={"Metehan","Aygul",517,62.80};

int main()
{	
//struct ogrenci bilgi={"Metehan","Aygul",517,62.80};
/* Program, bir önceki programın yaptığı işlem ile aynı işlemi gerçekleştirir.
Tek fark yapı değişken bildirim işleminin main() fonksiyonu içinde yapılmış olmasıdır. */

printf("ad: %s\n",bilgi.ad);

printf("soyad: %s\n",bilgi.soyad);

printf("no: %d\n",bilgi.no);

printf("ort: %.2f\n",bilgi.ort);

getch();
return 0;
}