#include <stdio.h> // KÜTÜPHANE TANIMLAMA
#include <conio.h> // KÜTÜPHANE TANIMLAMA
#include <string.h> // KÜTÜPHANE TANIMLAMA
 
int main()
{
      char kelime1[50]; // KARAKTER TÜRÜNDE DEĞER TANIMLIYORUZ 50 İLE SINIRLANDIRIYORUZ
      char kelime2[50]; // KARAKTER TÜRÜNDE DEĞER TANIMLIYORUZ 50 İLE SINIRLANDIRIYORUZ
      int sonuc; // SAYI TÜRÜNDE DEĞER TANIMLAMA
 
      printf("\n Birinci kelime :"); // KULLANICIDAN DEĞER ALMA
      gets(kelime1); // KLAVYEDEN GİRİLEN STR İLE GÖSTERİLEN KARAKTER DİZİSİNE YAZAR
 
      printf("\n Ikinci kelime :"); // KULLANICIDAN DEĞER ALMA
      gets(kelime2); // KLAVYEDEN GİRİLEN STR İLE GÖSTERİLEN KARAKTER DİZİSİNE YAZAR
 
      sonuc = strcmp(kelime1,kelime2); // SONUC DEĞERİNİ strcmp KOMUTUYLA kelime1 VE kelime2 KARŞILAŞTIRIYOR
 
      if( sonuc == 0 ) // EĞER sonuc DEĞERİ 0 A EŞİTSE
          printf("\n kelimeler birbirinin aynisi.."); // SONUCU EKRANA YAZDIRMA
      else if( sonuc > 1 ) // EĞER sonuc > 1 İSE
    	{
          printf("\n 1. kelime daha uzun..."); // SONUCU EKRANA YAZDIRMA
          printf("\n %s kelimesi %s kelimesinden daha uzun...",kelime1,kelime2); // KELİMELE DEĞERLERİNİ EKRANA YAZDIRMA
        }
      else if( sonuc < 1)
      	{
          printf("\n 2. kelime daha uzun..."); // SONUCU EKRANA YAZDIRMA
          printf("\n %s kelimesi %s kelimesinden daha uzun...",kelime2,kelime1); // KELİMELE DEĞERLERİNİ EKRANA YAZDIRMA
      	}
 
      return 0;
}
