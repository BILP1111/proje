// girilen bir sayi icin carpim tablosunu yazdiran program

#include <stdio.h> // KÜTÜPHANE TANIMLAMA

int main()
{
   int n, i; // DEÐER TANIMLAMA
   printf("Bir sayi giriniz = "); // KULLANICIDAN DEÐER ALMA
   scanf("%d",&n); // DEÐERÝ HAFIZADA TUTMA
   for(i=1; i<=10; ++i) // DÖNGÜ AÇMA i=1 i<=10 VE i YÝ 1 ARTTIMA 
   {
      printf("%d * ", n); // KULLANICININ YAZDIGI DEGERI EKRANA YAZDIRMA
      printf("%d",i); // DONGUDEKI i YI EKRANA YAZDIRMA
      printf(" = %d \n", n*i); // KULLANICININ GÝRDÝÐÝ DEÐERÝ DÖNGÜDEKÝ SAYI ÝLE ÇARPIP EKRANA YAZDIRMA
   }
   
   return 0;
}
