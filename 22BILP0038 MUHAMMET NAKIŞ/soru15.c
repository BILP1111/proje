// Klavyeden girilen harfin sesli harf olup olmadýðýný kontrol eden program.

#include <stdio.h> // KÜTÜPHANE TANIMLAMA

main () {
	int karakter,seslimi=0; // DEÐER TANIMLAMA
    printf("Klavyeden bir harf girin:"); // KULLANICIDAN DEÐER ALMA
	scanf("%c" ,&karakter); // DEÐERÝ HAFIZADA TUTMA
    char sesli[]={'a','A','e','E','I','i','o','O','u','U'}; // KARAKTER TANIMLAMA
    
    for(int i=0;i<10;i++){ // DÖNGÜ AÇMA 
         if(karakter == sesli[i]){ // EÐER karakter == sesli[i] ÝSE
             seslimi++; // seslimi 1 ARTTIR
             break; // SON
         }
     }

     if(seslimi != 0) // seslimi 0'A EÞÝT DEÐÝL MÝ
         printf("%c harfi sesli harftir." ,karakter); // SONUCU EKRANA YAZDIRMA
     else // DEÐÝLSE
         printf("%c harfi sesli harf degildir." ,karakter); // SONUCU EKRANA YAZDIRMA
	
}
