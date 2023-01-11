// Ayrý ayrý girilen adý ve soyadi bilgilerini birleþtirerek tam adýný gösteren program.

#include <stdio.h> // KÜTÜPHANE TANIMLAMA
#include <conio.h> // KÜTÜPHANE TANIMLAMA
#include <string.h> // KÜTÜPHANE TANIMLAMA

int main()
{
      char adi[25]; // KARAKTER TANIMLAMA VE KARAKTERE 25 HARFLÝK SINIR BELÝRLEME
      char ad2[25]; // KARAKTER TANIMLAMA VE KARAKTERE 25 HARFLÝK SINIR BELÝRLEME
      char soyadi[25]; // KARAKTER TANIMLAMA VE KARAKTERE 25 HARFLÝK SINIR BELÝRLEME
      char tamadi[100]; // KARAKTER TANIMLAMA VE KARAKTERE 100 HARFLÝK SINIR BELÝRLEME
 
      printf("\n Adi : "); // KULLANICIDAN DEÐER ALMA
      gets(adi); // KLAVYEDEN GÝRÝLEN STR ÝLE GÖSTERÝLEN KARAKTER DÝZÝSÝNE YAZAR 
 
      printf("\n Ikinci Adi : "); // KULLANICIDAN DEÐER ALMA
      gets(ad2); // KLAVYEDEN GÝRÝLEN STR ÝLE GÖSTERÝLEN KARAKTER DÝZÝSÝNE YAZAR
 
      printf("\n Soyadi : "); // KULLANICIDAN DEÐER ALMA
      gets(soyadi); // KLAVYEDEN GÝRÝLEN STR ÝLE GÖSTERÝLEN KARAKTER DÝZÝSÝNE YAZAR
 
      strcpy(tamadi,adi); //BÝR KATARI BAÞKA KATARA KOPYALAMAK ÝÇÝN KULLANILDI
      strcat(tamadi," "); //BÝR KATARI BAÞKA KATARA KOPYALAMAK ÝÇÝN KULLANILDI
      strcat(tamadi,ad2); //BÝR KATARI BAÞKA KATARA KOPYALAMAK ÝÇÝN KULLANILDI
      strcat(tamadi," "); //BÝR KATARI BAÞKA KATARA KOPYALAMAK ÝÇÝN KULLANILDI
      strcat(tamadi,soyadi); //BÝR KATARI BAÞKA KATARA KOPYALAMAK ÝÇÝN KULLANILDI
 
      printf("\n Adi Soyadi : %s",tamadi); // DEÐERÝ EKRANDA YAZDIRMA
 
      return 0;
}
