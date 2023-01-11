#include <stdio.h>
#include <conio.h>
 
int main()
{
 int sayilar[10] = {4,11,15,36,55,83,42,99,18,10};
 int aranan = 0;
 int konum = 0;
 int sayac = 0;
 //Deðer atama iþlemi yapýlýr.
 
 char bulundu = 'Y';
 
 printf("\n Liste icerisinde aranacak sayi : ");//Sayýlar kümesindeki aranacak sayýyý giriniz.
 scanf("%i",&aranan);
 
 for( sayac= 0; sayac < 10; sayac++ )
 {
  if( sayilar[sayac] == aranan )
  {
   bulundu = 'E';
   konum = sayac + 1;
   break;
  }
 }
 
 if(bulundu == 'E' )// Girdiðiniz sayý bulundu.
  printf("\n %i sayisi listenin %i. sirasinda.",aranan,konum);//Aradýðýnýz sayýnýn sýrasýný söyler.
 else
  printf("\n %i sayisi gecerli degil.",aranan);//Girdiðiniz sayý geçersiz sayýdýr.
 
 getch();
}
