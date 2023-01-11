#include <stdio.h>
#include <conio.h>
#include <math.h>
 
void main(void)  // boþ 
{
 int yas = 0;   
 
 clrscr();
 
 printf("\n Yasinizi giriniz : ");   // girilen yaþ bilgisi yas olarak programa tanýtýlýr
 scanf("%i",&yas);
 fflush(stdin);
 
 if( yas >= 1 && yas <= 4)      // eðer 1 ile 4 arasý ise bebeklik dönemi
  printf("\n Bebeklik Donemi");
 else if( yas > 4 && yas <= 14 )   // deðilse eðer 4 14 arasý ise ilkötretim dönemi
  printf("\n Ilkogretim Donemi");
 else if( yas > 14 && yas <= 21 )
  printf("\n Yuksek Ogretim Donemi");
 else if( yas > 21 && yas <= 60 )
  printf("\n Is Hayati ");
 else if( yas > 60 )
  printf("\n Emeklilik Donemi");
 else
  printf("\n Gecersiz Yas...");   // yaþ bilgisi belirtilenden yüksek veya düþük girilirse geçersiz yaþ hatasý alýnýr 
 
 getch();
}
