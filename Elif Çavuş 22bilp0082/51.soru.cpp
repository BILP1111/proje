#include <stdio.h> // KÜTÜPHANE TANIMLAMA
#include <conio.h> // KÜTÜPHANE TANIMLAMA
#include <string.h> // KÜTÜPHANE TANIMLAMA

int main()
{
      char adi[25]; // KARAKTER TANIMLAMA VE KARAKTERE 25 HARFLİK SINIR BELİRLEME
      char ad2[25]; 
      char soyadi[25]; 
      char tamadi[100]; // KARAKTER TANIMLAMA VE KARAKTERE 100 HARFLİK SINIR BELİRLEME
 
      printf("\n Adi : "); // KULLANICIDAN DEĞER ALMA
      gets(adi); // KLAVYEDEN GİRİLEN STR İLE GÖSTERİLEN KARAKTER DİZİSİNE YAZAR 
 
      printf("\n Ikinci Adi : "); // KULLANICIDAN DEĞER ALMA
      gets(ad2); // KLAVYEDEN GİRİLEN STR İLE GÖSTERİLEN KARAKTER DİZİSİNE YAZAR
 
      printf("\n Soyadi : "); // KULLANICIDAN DEĞER ALMA
      gets(soyadi); // KLAVYEDEN GİRİLEN STR İLE GÖSTERİLEN KARAKTER DİZİSİNE YAZAR
 
      strcpy(tamadi,adi); //BİR KATARI BAŞKA KATARA KOPYALAMAK İÇİN KULLANILDI
      strcat(tamadi," "); 
      strcat(tamadi,ad2); 
      strcat(tamadi," "); 
      strcat(tamadi,soyadi); 
 
      printf("\n Adi Soyadi : %s",tamadi); // DEĞERİ EKRANDA YAZDIRMA
 
      return 0;
}
