#include<stdio.h> // KÜTÜPHANE TANIMLAMA
#include <string.h> // KÜTÜPHANE TANIMLAMA
 int main()
 {
    char metin[500]; // KARAKTER TANIMLAMA VE KARAKTERE 500 HARFLÝK SINIR BELÝRLEME
    printf("Lutfen cevirelecek metni giriniz: "); // EKRANA YAZDIRMA
    gets(metin); // KLAVYEDEN GÝRÝLEN STR ÝLE GÖSTERÝLEN KARAKTER DÝZÝSÝNE YAZAR
    printf("Sonuc: \"%s\"\n",strupr(metin)); // SONUCU EKRANA VERÝR STRUPR KOMUTU BÜYÜK HARFLE YAZMAK ÝÇÝN KULLANILMIÞTIR

    return  0;
    
 }

