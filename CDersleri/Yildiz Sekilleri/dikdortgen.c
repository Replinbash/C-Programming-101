#include<stdio.h>
#include<conio.h>

// Murat hocanın dediği, içi boş dikdörtgen yazdırma programı
	void dortgen(int kisa, int uzun) // dortgen adında bir fonksiyon oluşturarak başladım, kısa ve uzun adında 2 değişken verdim.
	{
		int i, j;
		for(i=0; i<kisa; ++i) // ilk for döngümüz. Satırlara hükmeden döngü demeyi seviyorum.
		{
			for(j=0; j<uzun; ++j) // bu da sütunlara hükmeden döngümüz. 
			{
				if(i==0) // şimdi burada ben şunu demeye çalıştım. i = 0 iken yani 1. satırdayken veya i = kisa-1 yani son satirdayken
				{		//Bütün satırda yıldız yazdıralım. İlk if ve else if imiz bu yüzden. Aradaki satırlar için else'e gelelim.
					printf("*");
				}
				else if(i==(kisa-1))
				{
					printf("*");
				}
				else{ // aradaki satırlar için şöyle bir mantık kullandım, j=0 yani 1. sütun veya j= (uzun-1) yani son sütun olursa yıldız koy,
					if(j==0 || j==(uzun-1)) // yok başka bir sütundaysak örneğin 2. satır 2. sütundayız buranın boş kalması lazım.
					{
						printf("*");
					}
					else{
						printf(" "); // işte bu else, yukarda bahsettiğim boşluğu sağlayan karar yapısı. 
					}
				}
			}
			printf("\n");
		}
	}

int main() 
{
	int k, u; // klavyeden almak için ise k ve u adında iki değişken atadım. 
	printf("Kisa kenar: ");
	scanf("%d", &k);
	printf("Uzun kenar: ");
	scanf("%d", &u);
	dortgen(k, u); // sırasıyla k ve u; sırasıyla kisa ve uzun değişkenlerine oturacak şekilde, bu fonksiyonu çalıştırttım.
	
    getch();
	return 0;
}