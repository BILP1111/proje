// Kullanýcýnýn gireceði 5 sayiyi kullanýcýnýn istediði düzende sýralayýp ekranda listeleyen program.

#include <stdio.h> // KÜTÜPHANE TANIMLAMA
#include <conio.h> // KÜTÜPHANE TANIMLAMA
 
int main()
{
 int sayilar[5]; // SAYISAL DEÐERLERÝ TANIMLAMA
 int sayac = 0; // SAYISAL DEÐERLERÝ TANIMLAMA
 int buyuk = 0, kucuk = 0; // SAYISAL DEÐERLERÝ TANIMLAMA 
 int temp = 0; // SAYISAL DEÐERLERÝ TANIMLAMA
 
 printf("\n Sayi siralama...");
 printf("\n ================\n");
 
 for(sayac=0 ; sayac < 5; sayac++)
 {
  printf("%i. Sayi : ",sayac+1);
  scanf("%i",&sayilar[sayac]);
  fflush(stdin);
 }
 
 printf("\n\n Siralama Oncesi...");
 printf("\n ================= ");
 
 for(sayac=0 ; sayac < 5; sayac++)
 {
  printf("\n%i",sayilar[sayac]);
 }
 
 for( buyuk=0; buyuk<4 ; buyuk++)
 {
  for( kucuk = buyuk+1; kucuk<5; kucuk++)
  {
   if( sayilar[buyuk] > sayilar[kucuk] )
   {
    temp = sayilar[buyuk];
    sayilar[buyuk] = sayilar[kucuk];
    sayilar[kucuk] = temp;
   }
  }
 }
 
 printf("\n\n Siralama Sonrasi...");
 printf("\n ===================");
 
 for(sayac=0 ; sayac < 5; sayac++)
 {
  printf("\n %i",sayilar[sayac]);
 }
 
 getch();
}
