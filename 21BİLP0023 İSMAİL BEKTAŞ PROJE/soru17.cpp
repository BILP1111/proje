#include <stdio.h>
#include <conio.h>
#include <math.h>
 
 main(void)
{
 int yas = 0;
 
 printf("\n Yasinizi giriniz : ");
 scanf("%i",&yas);

 if( yas >= 1 && yas <= 4)
  printf("\n Bebeklik Donemi");
 else if( yas > 4 && yas <= 14 )
  printf("\n Ilkogretim Donemi");
 else if( yas > 14 && yas <= 21 )
  printf("\n Yuksek Ogretim Donemi");
 else if( yas > 21 && yas <= 60 )
  printf("\n Is Hayati ");
 else if( yas > 60 )
  printf("\n Emeklilik Donemi");
 else
  printf("\n Gecersiz Yas...");
 
 getch();
}
