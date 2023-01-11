#include <stdio.h>
#include <conio.h>
 
int main()
{
 int sayilar[10];
 int sayac = 0;
 int max = 0;
 int min = 0;
 //Deðer atama iþlemi yapýlýr.
 
 
 printf("\n Maximum ve Minimum...");//En küçük ile en büyük sayýyu bulan program.
 printf("\n ===================== \n");
 
 for(sayac=0 ; sayac < 10; sayac++)//0 ile 10 arasýndaki sayýlarý sayaç ile arttirir.
 {
  printf("%i. Sayi : ",sayac+1);
  scanf("%i",&sayilar[sayac]);
 
  if( sayac == 0 )
   min = sayilar[0];
 
  if( sayilar[sayac] > max )//En büyük sayýyý bulur.
   max = sayilar[sayac];
 
  if( sayilar[sayac] < min )//En küçük sayýyý bulur.
   min = sayilar[sayac];
 }
 
 printf("\n En Buyuk Sayi : %i ",max);//En büyük sayýyý ekrana yazdýrýr.
 printf("\n En Kucuk Sayi : %i ",min);////En küçük sayýyý bulur.
 
 getch();
}
