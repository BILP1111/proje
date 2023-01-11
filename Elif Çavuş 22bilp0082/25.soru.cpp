#include <stdio.h> // KÜTÜPHANE TANIMLAMA

int main()
{
   int n, i; // DEĞER TANIMLAMA
   printf("Bir sayi giriniz = "); // KULLANICIDAN DEĞER ALMA
   scanf("%d",&n); // DEĞERİ HAFIZADA TUTMA
   for(i=1; i<=10; ++i) // DÖNGÜ AÇMA i=1 i<=10 VE i Yİ 1 ARTTIMA 
   {
      printf("%d * ", n); // KULLANICININ YAZDIGI DEGERI EKRANA YAZDIRMA
      printf("%d",i); // DONGUDEKI i YI EKRANA YAZDIRMA
      printf(" = %d \n", n*i); // KULLANICININ GİRDİĞİ DEĞERİ DÖNGÜDEKİ SAYI İLE ÇARPIP EKRANA YAZDIRMA
   }
   
   return 0;
}
