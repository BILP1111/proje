#include <stdio.h>
#include <conio.h>
 
int main()
{
 int sayilar[10] = {4,11,15,36,55,83,42,99,18,10};
 int aranan = 0;
 int konum = 0;
 int sayac = 0;
 //De�er atama i�lemi yap�l�r.
 
 char bulundu = 'Y';
 
 printf("\n Liste icerisinde aranacak sayi : ");//Say�lar k�mesindeki aranacak say�y� giriniz.
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
 
 if(bulundu == 'E' )// Girdi�iniz say� bulundu.
  printf("\n %i sayisi listenin %i. sirasinda.",aranan,konum);//Arad���n�z say�n�n s�ras�n� s�yler.
 else
  printf("\n %i sayisi gecerli degil.",aranan);//Girdi�iniz say� ge�ersiz say�d�r.
 
 getch();
}
