#include <stdio.h> // KÜTÜPHANE TANIMLAMA
#include <conio.h> // KÜTÜPHANE TANIMLAMA
 
int main()
{
      char kelime[10]; // KARAKTER TANIMLAMA VE KARAKTERE 10 HARFLİK SINIR BELİRLEME
 
      printf("\n Kelimeyi girin : "); // KULLANICIDAN DEĞER ALMA
      gets(kelime); // KLAVYEDEN GİRİLEN STR İLE GÖSTERİLEN KARAKTER DİZİSİNE YAZAR
 
      printf("\n Girilen Kelime : %s",kelime); // kelime DEĞERİNİ EKRANA YAZDIRMA
      return 0;
}
