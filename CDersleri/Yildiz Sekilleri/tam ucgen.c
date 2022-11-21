#include <stdio.h>
#include <conio.h>

// üçgen şekli oluşturma	
int main()
{
int i,j,boy;

printf("boyunu giriniz: ");
scanf("%d",&boy);
printf("\n\n");

for(i=1 ; i<=boy ; i++)		//Üçgen
{    	system("COLOR A");
	
		for(j=1 ; j<=20-i ; j++)	//boşluk  
		{     
			printf(" ");
		}
		for(j=1 ; j<=i ; j++){     //1 tane yıldız (i kadar yıldız)
			
			printf("*");
			printf(" ");
		}	
			printf("\n");    //Sonra alt satıra geç.	

}

getch();
return 0;
}


