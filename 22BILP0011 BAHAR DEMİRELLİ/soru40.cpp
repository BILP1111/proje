#include <stdio.h>
#include <conio.h>
 
int main()
{
 int sayilar[10] = {4,11,15,36,55,83,42,99,18,10};
 int aranan = 0;
 int konum = 0;
 int sayac = 0;
 
 char bulundu = 'A';
 

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

//"sayilar", "aranan", "konum", "sayac" ve "bulundu" de�i�kenleri tan�mlan�r. "sayilar" de�i�keni aranacak say�lar� saklayacak olan bir dizidir, "aranan" de�i�keni ise kullan�c�dan girilen say�y� saklar, "konum" de�i�keni ise aranan say�n�n dizideki konumunu saklar, "sayac" de�i�keni ise d�ng�ler i�in kullan�l�r ve "bulundu" de�i�keni ise say�n�n dizide bulunup bulunmad���n� saklar. Kullan�c�dan aranacak say�y� girdirir.
