#include <stdio.h>
#include <conio.h>
 
int main()
{
 int sayilar[5];
 int sayac = 0;
 int buyuk = 0, kucuk = 0;
 int temp = 0;
 //De�er atama i�lemi yap�l�r.
 
 
 printf("\n Sayi siralama...");//Girdi�iniz say�lar� s�rayalan C program�
 printf("\n ================\n");
 
 for(sayac=0 ; sayac < 5; sayac++)
 {
  printf("%i. Sayi : ",sayac+1);
  scanf("%i",&sayilar[sayac]);
 }
 
 printf("\n\n Siralama Oncesi...");//S�ralamadan �nceki hali
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
 
 printf("\n\n Siralama Sonrasi...");//S�ralamadan sonraki hali
 printf("\n ===================");
 
 for(sayac=0 ; sayac < 5; sayac++)
 {
  printf("\n %i",sayilar[sayac]);
 }
 
 getch();
}
