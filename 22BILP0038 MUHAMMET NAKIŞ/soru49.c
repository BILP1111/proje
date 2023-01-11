// 10 Karaktere kadar bir kelime girilmesini isteyen ve ekrana yazdýran program.

#include <stdio.h> // KÜTÜPHANE TANIMLAMA
#include <conio.h> // KÜTÜPHANE TANIMLAMA
 
int main()
{
      char kelime[10]; // KARAKTER TANIMLAMA VE KARAKTERE 10 HARFLÝK SINIR BELÝRLEME
 
      printf("\n Kelimeyi girin : "); // KULLANICIDAN DEÐER ALMA
      gets(kelime); // KLAVYEDEN GÝRÝLEN STR ÝLE GÖSTERÝLEN KARAKTER DÝZÝSÝNE YAZAR
 
      printf("\n Girilen Kelime : %s",kelime); // kelime DEÐERÝNÝ EKRANA YAZDIRMA
      return 0;
}
