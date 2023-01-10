#include <stdio.h>
#include <conio.h>
 
void main(void)
{
 int sayilar[10] = {5,12,16,38,56,88,49,23,11,44};
 int aranan = 0;
 int konum = 0;
 int sayac = 0;
 
 char bulundu = 'Y';
 
 printf("\n Liste icerisinde aranacak sayi : ");
 scanf("%i",&aranan);
 fflush(stdin);
 
 for( sayac= 0; sayac < 10; sayac++ )
 {
  if( sayilar[sayac] == aranan )
  {
   bulundu = 'E';
   konum = sayac + 1;
   break;
  }
 }
 
 if(bulundu == 'E' )
  printf("\n %i sayisi listenin %i. sirasinda.",aranan,konum);
 else
  printf("\n %i sayisi gecerli degil.",aranan);
 
 getch();
}
