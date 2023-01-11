// Girilen kelimenin karakter sayýsýný hesaplayan program.

#include <stdio.h> // KÜTÜPHANE TANIMLAMA
#include <conio.h> // KÜTÜPHANE TANIMLAMA
#include <string.h> // KÜTÜPHANE TANIMLAMA
 
int main()
{
      char kelime[100]; // KARAKTER DEÐÝÞKENÝ OLARAK kelime DEÐERÝ TANIMLIYORUZ VE 100 KRÝTERÝ BELÝRLÝYORUZ
      int uzunluk = 0; // SAYISAL DEÐÝÞKEN OLARAK uzunluk DEÐERÝ TANIMLIYORUZ VE 0 A EÞÝTLÝYORUZ
 
 
      printf("\n Kelime giriniz: "); // KULLANICIDAN DEÐER ALMA
      gets(kelime); // DEÐERÝ HAFIZADA TUTMA
 
      uzunluk = strlen(kelime); // uzunluk DEÐERÝNÝ strlen KARAKTER SAYISINI HESAPLAMAK ÝÇÝN KULLANILIR PARANTEZ ÝÇERÝSÝNDE kelime DEÐERÝNÝ ALMASI
 
      printf(" \"%s\" kelimesi \n %d karakter sayisi kadardir.",kelime,uzunluk); // kelime DEÐERÝNÝ %s KOMUTUNDA ÇAÐIRIYORUZ VE %d ÝLE uzunluk DEÐERÝNÝ EKRANA ÇAÐIRIYORUZ
      return 0;
}
