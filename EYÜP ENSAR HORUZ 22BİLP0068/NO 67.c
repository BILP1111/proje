#include <stdio.h>
#include <conio.h>
 
struct zaman
{
      int saat;
      int dakika;
      int saniye;
};
 
void main(void)  // BO� 
{
      struct zaman z1,z2;   
      struct zaman toplam;  // farkl� de�i�kenlere tek bir i�aret�i ile eri�ilmesini sa�lar
 
      clrscr();
 
      printf("\n Birinci saati giriniz : ");
      printf("\n Saat   : "); scanf("%i",&z1.saat); fflush(stdin); // girilen saat bilgisinin neresinde ne oldu�unu tan�mlad�k. 
      printf(" Dakika : "); scanf("%i",&z1.dakika); fflush(stdin);
      printf(" Saniye : "); scanf("%i",&z1.saniye); fflush(stdin);
 
 
      printf("\n Ikinci saati giriniz : ");
      printf("\n Saat   : "); scanf("%i",&z2.saat); fflush(stdin);
      printf(" Dakika : "); scanf("%i",&z2.dakika); fflush(stdin);
      printf(" Saniye : "); scanf("%i",&z2.saniye); fflush(stdin);
 
      toplam.saat = z1.saat  + z2.saat;
      toplam.dakika = z1.dakika  + z2.dakika;   // toplam saat iki saat bilginin toplanmas�yla olu�ur 
      toplam.saniye = z1.saniye  + z2.saniye;
 
      if( toplam.saniye >= 60 )  
      {
        toplam.dakika++;
        toplam.saniye -= 60;
      }
 
      if( toplam.dakika >= 60 )
      {
        toplam.saat++;
        toplam.dakika -= 60;
      }
 
      printf("\n Toplam zaman %i saat, %i dakika, %i saniye",toplam.saat,toplam.dakika,toplam.saniye);
 
      getch();
}
