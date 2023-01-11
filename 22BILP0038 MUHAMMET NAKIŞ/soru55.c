// Kullanýcý tarafýndan girilen bir metnin tersini veren program.

#include <stdio.h> // KÜTÜPHANE TANIMLAMA
#include <conio.h> // KÜTÜPHANE TANIMLAMA
#include <string.h> // KÜTÜPHANE TANIMLAMA
 
int main()
{
      char metin[100]; // KARAKTER TÜRÜNDE DEÐER TANIMLIYORUZ 100 ÝLE SINIRLANDIRIYORUZ
      char ters[100]; // // KARAKTER TÜRÜNDE DEÐER TANIMLIYORUZ 100 ÝLE SINIRLANDIRIYORUZ
 
      int uzunluk = 0; // SAYI TÜRÜNDE DEÐER TANIMLAMA
      int n = 0; // SAYI TÜRÜNDE DEÐER TANIMLAMA
 
      printf("\n Bir metin giriniz : " ); // KULLANICIDAN DEÐER ALMA
      gets(metin); // KLAVYEDEN GÝRÝLEN STR ÝLE GÖSTERÝLEN KARAKTER DÝZÝSÝNE YAZAR
 
      uzunluk = strlen(metin); // UZUNLUK DEÐERÝNÝ METÝN DEÐERÝ ÝÇEÝRÝSÝNDEKÝ KARAKTER DÝZÝSÝNÝN UZUNLUÐUNA EÞÝTLÝYOR
 
      for( n = 0 ; n < uzunluk; n++ ) // DÖNGÜ AÇMA n = 0 n DEÐER UZUNLUK DEÐERÝNDEN KÜÇÜK n YÝ 1 ARTTIRMA
      {
          ters[n] = metin[uzunluk-1-n];  // METÝN UZUNLUÐUNU BÝR EKSÝLTEREK GÖSTERME
      }
 
      printf("\n Girilen Metin : %s",metin); // metin DEÐERÝNÝ EKRANA YAZDIRMA
      printf("\n Metnin Tersi  : %s",ters); // ters DEÐERÝNÝ EKRANA YAZDIRMA
      return 0;
}
