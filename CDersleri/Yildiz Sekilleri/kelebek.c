#include <stdio.h>
#include <conio.h>

int main(){           
 
     //Yıldızlarla Kelebek Oluşturma
int i,j;

	for(i=1 ; i<=5 ; i++){     //Kelebeğin üst yarısı:
	
		for(j=1; j<=i; j++){     //1 tane yıldız (i kadar yıldız)
			printf("*");
		}
		for(j=1; j<=5-i; j++){     //4 boşluk  (5-i kadar boşluk)
			printf(" ");
		}
		for(j=1; j<=5-i; j++){     //4 boşluk  (5-i kadar boşluk)
			printf(" ");
		}
		for(j=1; j<=i; j++){      //1 yıldız (i kadar yıldız)
			printf("*");
		}
		printf("\n");    //Sonra alt satıra geç.	
	
	}
	
	for(i=5; i>=1; i--){     //Kelebeğin alt yarısı:
		
		for(j=1; j<=i; j++){
			printf("*");	
		}
		for(j=1; j<=5-i; j++){
			printf(" ");
		}
		for(j=1; j<=5-i; j++){
			printf(" ");
		}
		for(j=1; j<=i; j++){
			printf("*");	
		}
		printf("\n");
	}
	
getch();
return 0;
}
