#include <stdio.h> // KÜTÜPHANE TANIMLAMA
#include <conio.h> // KÜTÜPHANE TANIMLAMA
#include <string.h> // KÜTÜPHANE TANIMLAMA
 
int main()
{
      char metin[100]; // KARAKTER TÜRÜNDE DEĞER TANIMLIYORUZ 100 İLE SINIRLANDIRIYORUZ
      char ters[100]; // // KARAKTER TÜRÜNDE DEĞER TANIMLIYORUZ 100 İLE SINIRLANDIRIYORUZ
 
      int uzunluk = 0; // SAYI TÜRÜNDE DEĞER TANIMLAMA
      int n = 0; // SAYI TÜRÜNDE DEĞER TANIMLAMA
 
      printf("\n Bir metin giriniz : " ); // KULLANICIDAN DEĞER ALMA
      gets(metin); // KLAVYEDEN GİRİLEN STR İLE GÖSTERİLEN KARAKTER DİZİSİNE YAZAR
 
      uzunluk = strlen(metin); // UZUNLUK DEĞERİNİ METİN DEĞERİ İÇEİRİSİNDEKİ KARAKTER DİZİSİNİN UZUNLUĞUNA EŞİTLİYOR
 
      for( n = 0 ; n < uzunluk; n++ ) // DÖNGÜ AÇMA n = 0 n DEĞER UZUNLUK DEĞERİNDEN KÜÇÜK n Yİ 1 ARTTIRMA
      {
          ters[n] = metin[uzunluk-1-n];  // METİN UZUNLUĞUNU BİR EKSİLTEREK GÖSTERME
      }
 
      printf("\n Girilen Metin : %s",metin); // metin DEĞERİNİ EKRANA YAZDIRMA
      printf("\n Metnin Tersi  : %s",ters); // ters DEĞERİNİ EKRANA YAZDIRMA
      return 0;
}
