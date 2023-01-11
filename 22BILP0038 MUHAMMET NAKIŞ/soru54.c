// Girilen cümle içerisinde kullanýcýnýn istediði karakterden kaç tane olduðunu bulan program.

#include <stdio.h> // KÜTÜPHANE TANIMLAMA
#include <conio.h> // KÜTÜPHANE TANIMLAMA
#include <string.h> // KÜTÜPHANE TANIMLAMA
 
int main()
{
      char kelime[100]; // KARAKTER DEÐÝÞKENÝ OLARAK kelime DEÐERÝ TANIMLAYIP 100 KRÝTERÝ BELÝRLEME
      int uzunluk = 0; // SAYISAL DEÐÝÞKEN OLARAK uzunluk DEÐERÝ TANIMLAYIP 0 A EÞÝTLEME
      int n = 0; // SAYISAL DEÐÝÞKEN OLARAK n DEÐERÝ TANIMLAYIP 0 A EÞÝTLEME
      int sayac = 0; // SAYISAL DEÐÝÞKEN OLARAK sayac DEÐERÝ TANIMLAYIP 0 A EÞÝTLEME
      char aranan; // KARAKTER DEÐÝÞKENÝ OLARAK aranan DEÐERÝ TANIMLAMA 
      char harf; // KARAKTER DEÐÝÞKENÝ OLARAK harf DEÐERÝ TANIMLAMA

      printf("\n Bir cumle giriniz: "); // KULLANICIDAN DEÐER ALMA
      gets(kelime); // DEÐERÝ HAFIZADA TUTMA
 
      printf("\n Hangi harf aranacak: "); // KULLANICIDAN DEÐER ALMA
      scanf("%c",&aranan); // DEÐERÝ HAFIZADA TUTMA
 
      uzunluk = strlen(kelime); // uzunluk DEÐERÝNÝ strlen KOMUTUYLA kelime DEÐERÝNÝN UZUNLUÐUNU ALIP DEÐERE EÞÝTLÝYORUZ
 
      for( n= 0; n < uzunluk ; n++) // n DEÐERÝ 0 DAN BAÞLAYARAK uzunluk DEÐERÝNE KADAR 1 ARTTIRMA
      {
          harf = kelime[n]; // harf DEÐERÝNÝ kelime DEÐERÝNÝN n DEÐERÝ ÝÇERÝSÝNDE harf DEÐERÝNE EÞÝTLEME
 
          if(aranan == harf) // EÐER aranan harf DEÐERÝNE EÞÝTSE
              sayac++; // sayac DEÐERÝNÝ ARTTIR
      }
 
      printf("\n \"%s\" cumlesi icinde %c harfi %d adet geciyor.",kelime,aranan,sayac); // %s KOMUTUYLA kelime DEÐERÝNÝ ÇAÐIRYORUZ %c KOMUTUYLA aranan DEÐERÝ VE %d KOMUTUYLADA sayac DEÐERÝN EKRANDA GÖSTERÝYORUZ
 
      return 0;
}
