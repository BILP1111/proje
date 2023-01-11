// Girilen kelime içerisindeki sesli harf sayýsýný bulan program.

#include <stdio.h> // KÜTÜPHANE TANIMLAMA
#include <conio.h> // KÜTÜPHANE TANIMLAMA
#include <string.h> // KÜTÜPHANE TANIMLAMA
 
int main()
{
      char kelime[100]; // KARAKTER DEÐÝÞKENÝ OLARAK kelime DEÐERÝ TANIMLIYORUZ VE 100 KRÝTERÝ BELÝRLÝYORUZ
      int uzunluk = 0; // SAYISAL DEÐÝÞKEN OLARAK uzunluk DEÐERÝ TANIMLIYORUZ VE 0 A EÞÝTLÝYORUZ
      int n = 0; // SAYISAL DEÐÝÞKEN OLARAK n DEÐERÝ TANIMLIYORUZ VE 0 A EÞÝTLÝYORUZ
      int sayac = 0; // SAYISAL DEÐÝÞKEN OLARAK sayac DEÐERÝ TANIMLIYORUZ VE 0 A EÞÝTLÝYORUZ
      char harf; // KARAKTER DEÐÝÞKENÝ OLARAK harf DEÐERÝ TANIMLIYORUZ 
 
      printf("\n Cumle giriniz: \n" ); // KULLANICIDAN DEÐER ALMA
      gets(kelime); // DEÐERÝ HAFIZADA TUTMA
 
      uzunluk = strlen(kelime); // uzunluk DEÐERÝNÝ strlen KOMUTUYLA kelime DEÐERÝ ÝÇERÝSÝNDE uzunluk DEÐERÝNE EÞÝTLEME
 
      for(n=0;n<uzunluk;n++) // n DEÐERÝNÝ 0 DAN BAÞLAYARAK uzunluk DEÐERÝNE KADAR n DEÐERÝNÝ 1 ARTTIRMA
      {
          harf = kelime[n]; // harf DEÐERÝNÝ kelime DEÐERÝNÝN n DEÐERÝNE EÞÝTLEME
 
          if( harf >= 'a' && harf <= 'z' ) // EÐER harf DEÐERÝ a DAN BÜYÜK VE a YA EÞÝTSE VE harf DEÐERÝ z DEÐERÝNDEN KÜÇÜK VE EÞÝTSE
              harf = harf - 32; // harf DEÐERÝNÝ harf - 32 DEÐERÝNE EÞÝTLÝYORUZ
 
          if( harf == 'A' || harf == 'E' || harf == 'I' || harf == 'O' || harf == 'U') // EÐER harf A VEYA harf E VEYA harf I VEYA harf O VEYA harf U ÝSE
              sayac++; // sayaci 1 ARTTIR
      }
 
      printf("\n %s cumlesinde %d sesli harf vardir.",kelime,sayac); // kelime deðerini %s KOMUTUYLA EKRANDA GÖSTERÝYORUZ VE sayad DEÐERÝNÝDE %d KOMUTUYLA EKRANDA GÖSTERÝYORUZ
 
      return 0;
}
