#include <stdio.h>
#include <conio.h>
 
void main(void)
{
 int sayilar[10] = {4,11,15,36,55,83,42,99,18,10};  // 10 sayý programa tanýtýldý
 int aranan = 0;
 int konum = 0;
 int sayac = 0;
 
 char bulundu = 'Y';
 
 clrscr();
 printf("\n Liste icerisinde aranacak sayi : ");  // aranacak sayi sorulur aranan diye programa tanýtýlýr
 scanf("%i",&aranan);
 fflush(stdin);
 
 for( sayac= 0; sayac < 10; sayac++ )   // for döngüsü boyunca 0 ile 10 arasýnda aranan sayýyý bulanak adar döner
 {
  if( sayilar[sayac] == aranan )
  {
   bulundu = 'E';              // sayý bulunduðu zaman E ile ekran çýktýsýný listenin kaçýncý sýrasýnda oldupuna kadar yazar.
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
