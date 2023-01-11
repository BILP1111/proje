#include <stdio.h> // KÜTÜPHANE TANIMLAMA

int main() 
{
      
       int sayi,n = 0, i ; // DEĞER TANIMLAMA
       
       printf("Bir sayi giriniz:"); // KULLANICIDAN DEĞER ALMA
       scanf("%d", &sayi); // DEĞERİ HAFIZADA TUTMA
       for( i = 2; i <= sayi/2; i++) { // DÖNGÜ AÇMA i=2 i <= sayi/2 i++
         if(sayi % i == 0) { // EĞER sayi i'YE TAM BÖLÜNÜYORSA
           n = 1; // DEĞER TANIMLAMA
           break; // SON
         }
       } 
       if(n == 0) // EĞER n == 0 İSE
          printf("Sayi Asaldir\n"); // SONUCU EKRANA YAZDIRMA
       else // DEĞİLSE
          printf("Sayi Asal Degildir\n"); // SONUCU EKRANA YAZDIRMA
       return 0;
}
