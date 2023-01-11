#include <stdio.h>
#include <conio.h>
 
 main(void)
{
 int sayilar[5];
 int sayac = 0;
 int buyuk = 0, kucuk = 0;
 int temp = 0;
 
 
 printf("\n Sayi siralama...");
 printf("\n ================\n");
 
 for(sayac=0 ; sayac < 5; sayac++)
 {
  printf("%i. Sayi : ",sayac+1);
  scanf("%i",&sayilar[sayac]);
 
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
