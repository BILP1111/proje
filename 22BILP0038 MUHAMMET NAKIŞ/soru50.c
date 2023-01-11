// Girilen iki kelimeden hangisinin uzun olduðunu bulan program.

#include <stdio.h> // KÜTÜPHANE TANIMLAMA
#include <conio.h> // KÜTÜPHANE TANIMLAMA
#include <string.h> // KÜTÜPHANE TANIMLAMA
 
void main(void)
{
      char kelime1[50]; // KARAKTER TÜRÜNDE DEÐER TANIMLIYORUZ 50 ÝLE SINIRLANDIRIYORUZ
      char kelime2[50]; // KARAKTER TÜRÜNDE DEÐER TANIMLIYORUZ 50 ÝLE SINIRLANDIRIYORUZ
      int sonuc; // SAYI TÜRÜNDE DEÐER TANIMLAMA
 
      printf("\n 1. kelime :"); // KULLANICIDAN DEÐER ALMA
      gets(kelime1); // KLAVYEDEN GÝRÝLEN STR ÝLE GÖSTERÝLEN KARAKTER DÝZÝSÝNE YAZAR
 
      printf("\n 2. kelime :"); // KULLANICIDAN DEÐER ALMA
      gets(kelime2); // KLAVYEDEN GÝRÝLEN STR ÝLE GÖSTERÝLEN KARAKTER DÝZÝSÝNE YAZAR
 
      sonuc = strcmp(kelime1,kelime2); // SONUC DEÐERÝNÝ strcmp KOMUTUYLA kelime1 VE kelime2 KARÞILAÞTIRIYOR
 
      if( sonuc == 0 ) // EÐER sonuc DEÐERÝ 0 A EÞÝTSE
          printf("\n Kelimeler AYNI"); // SONUCU EKRANA YAZDIRMA
      else if( sonuc > 1 ) // EÐER sonuc > 1 ÝSE
    	{
          printf("\n 1. kelime daha uzun..."); // SONUCU EKRANA YAZDIRMA
          printf("\n %s kelimesi %s kelimesinden daha uzun...",kelime1,kelime2); // KELÝMELE DEÐERLERÝNÝ EKRANA YAZDIRMA
        }
      else if( sonuc < 1)
      	{
          printf("\n 2. kelime daha uzun..."); // SONUCU EKRANA YAZDIRMA
          printf("\n %s kelimesi %s kelimesinden daha uzun...",kelime2,kelime1); // KELÝMELE DEÐERLERÝNÝ EKRANA YAZDIRMA
      	}
 
      return 0;
}
