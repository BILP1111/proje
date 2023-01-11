#include<stdio.h> // KÜTÜPHANE TANIMLAMA
#include <string.h> // KÜTÜPHANE TANIMLAMA
 int main()
 {
    char metin[500]; // KARAKTER TANIMLAMA VE KARAKTERE 500 HARFLİK SINIR BELİRLEME
    printf("Buyuk harfe cevrilecek metni girin: "); // EKRANA YAZDIRMA
    gets(metin); // KLAVYEDEN GİRİLEN STR İLE GÖSTERİLEN KARAKTER DİZİSİNE YAZAR
    printf("Sonuc: \"%s\"\n",strupr(metin)); // SONUCU EKRANA VERİR STRUPR KOMUTU BÜYÜK HARFLE YAZMAK İÇİN KULLANILMIŞTIR

    return  0;
    
 }

