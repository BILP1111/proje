#include <stdio.h>
#include <conio.h>
 
int main()
{
 int yas = 0;
 //Yaþ deðer atamasý yapýlýr.
 
 printf("\n Yasinizi giriniz : ");//Kiþiden yaþ bilgisi istenir.
 scanf("%i",&yas);
 
 if( yas >= 1 && yas <= 4)//Eðer þartý ile yaþ aralýklarýný sorgular.
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
  printf("\n Gecersiz Yas...");//Geçersiz yaþ girdiniz.
 
 getch();
}
