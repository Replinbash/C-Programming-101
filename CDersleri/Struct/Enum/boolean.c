#include<stdio.h>
#include<conio.h>

// Degisken tipinin nasil olacagini tanimliyoruz
	enum boolean {
		false = 0,
		true = 1
	};
int main()
{	
    // Simdi de 'target' adinda bir degisken
	// tanimliyoruz
	enum boolean target;
	// Tanimladigimiz 'target' degiskenine
	// deger atayip, bir alt satirda da
	// kontrol yapiyoruz.
	target= true;
	if( target == true )
		printf("%d",true);

    
getch();
return 0;
}