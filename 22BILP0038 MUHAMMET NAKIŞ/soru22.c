// girilen bir sayinin asal sayi olup olmadigini bulan program.

#include <stdio.h> // KÜTÜPHANE TANIMLAMA

int main() 
{
      
       int sayi,n = 0, i ; // DEÐER TANIMLAMA
       
       printf("Bir sayi giriniz:"); // KULLANICIDAN DEÐER ALMA
       scanf("%d", &sayi); // DEÐERÝ HAFIZADA TUTMA
       for( i = 2; i <= sayi/2; i++) { // DÖNGÜ AÇMA i=2 i <= sayi/2 i++
         if(sayi % i == 0) { // EÐER sayi i'YE TAM BÖLÜNÜYORSA
           n = 1; // DEÐER TANIMLAMA
           break; // SON
         }
       } 
       if(n == 0) // EÐER n == 0 ÝSE
          printf("Sayi Asaldir\n"); // SONUCU EKRANA YAZDIRMA
       else // DEÐÝLSE
          printf("Sayi Asal Degildir\n"); // SONUCU EKRANA YAZDIRMA
       return 0;
}
