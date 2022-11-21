#include <stdio.h>
#include <string.h>
#include <conio.h>
//Adam Asmaca
int main() 
{
char harf, kelime[10]={'k','e','r','t','e','n','k','e','l','e'};
int i=15, hak=10;

printf("Adam Asmacaya hosgeldiniz.\n\n15 hakkiniz vardir.\n\nkelimemiz %d kelimeden olusan surungen bir hayvan.\n\n",strlen("kertenkele"));

while(i>=0)
{  
donus:    
printf("harf giriniz: ");
scanf("%c",&harf);

if ( harf==kelime[0] || harf==kelime[1] || harf==kelime[2] || harf==kelime[3] || harf==kelime[5] || harf==kelime[6] || harf==kelime[8] )
    {   
        
        printf("Dogru harfi buldunuz. %d harf kaldi. %d hakkiniz kaldi.\n\n",hak--,i--);        
    }
else if ( i==0 || hak==0 && hak>i )
    {
        printf("\n\n*******KAYBETTINIZ.*******\n\n");
        break;
    }
else if ( i==0 || hak==0 && i>hak )
    {
        printf("\n\n*******KAZANDINIZ.*******\n\n");
        break;
    }
/*else
    {
        printf("Yanlis harf girdiniz. %d harf kaldi. %d hakkiniz kaldi.\n\n",hak,i--);
        goto donus;   
    }*/
}
getch();
return 0;
}