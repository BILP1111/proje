// int ile deðiþken atadýk
// kullanýcýdan 5 sayý istedik ve bu sayýlarý okuttuk sonrasýnda for dönügüsü ile küçükten büyüðe yazdýrdýk
#include <stdio.h>

int main(void)
{
 int sayilar[5];
 int sayac = 0;
 int buyuk = 0, kucuk = 0;
 int temp = 0;
 
 
 for(sayac=0 ; sayac < 5; sayac++)
 {
  printf("%i. Sayi: ",sayac+1);
  scanf("%i",&sayilar[sayac]);
 }
 
 
 
 for(sayac=0 ; sayac < 5; sayac++)
 {
  
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
 
 printf("\n\n Siralama sonucu:");
 printf("\n ==");
 
 for(sayac=0 ; sayac < 5; sayac++)
 {
  printf("\n %i",sayilar[sayac]);
 }
}
