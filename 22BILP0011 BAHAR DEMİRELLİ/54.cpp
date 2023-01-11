#include <stdio.h>
#include <conio.h>
#include <string.h>
 
main()
{
      char kelime[100];		/* 100 harflik değer tanımlanıyor */
      int uzunluk = 0;		/* değer tanımlanıyor */
      int n = 0;		/* değer tanımlanıyor */
      int sayac = 0;		/* değer tanımlanıyor */
      char aranan;		/* değer tanımlanıyor */
      char harf;		/* değer tanımlanıyor */
 
      printf("\n Bir cumle giriniz : " );		/* ekrana yazı yazdırılıyor */
      gets(kelime);		/* kelime getirmesi isteniyor */
      fflush(stdin);		/* çıkış akışı */
 
      printf("\n Cumle icerisinden hangi harfi aramak istersiniz? : ");		/* ekrana yazı yazdırılıyor */
      scanf("%c",&aranan);		/* alınan değer yazdırılıyor */
      fflush(stdin);		/* çıkış akışı */
 
      uzunluk = strlen(kelime);
 
      for( n= 0; n < uzunluk ; n++)		/* döngüye sokuluyor, n 0'a eşitleniyor, n uzunluk'a kadar döngüde kalıyor, n +1 şeklinde artıyor */
      {
          harf = kelime[n];
 
          if(  aranan == harf)		/* eğer aranan harf'e eşit ise */
              sayac++;		/* sayac +1 şeklinde artıyor */
      }
 
      printf("\n \"%s\" cumlesi icinde %c harfi %i tane var.",kelime,aranan,sayac);		/* ekrana yazı yazdırılıyor */

 
      getch();
}