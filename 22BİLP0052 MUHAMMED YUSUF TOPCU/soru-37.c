#include <stdio.h>
#include <conio.h>
 
int main()
{
 int sayilar[10];
 int sayac = 0;
 int max = 0;
 int min = 0;
 //De�er atama i�lemi yap�l�r.
 
 
 printf("\n Maximum ve Minimum...");//En k���k ile en b�y�k say�yu bulan program.
 printf("\n ===================== \n");
 
 for(sayac=0 ; sayac < 10; sayac++)//0 ile 10 aras�ndaki say�lar� saya� ile arttirir.
 {
  printf("%i. Sayi : ",sayac+1);
  scanf("%i",&sayilar[sayac]);
 
  if( sayac == 0 )
   min = sayilar[0];
 
  if( sayilar[sayac] > max )//En b�y�k say�y� bulur.
   max = sayilar[sayac];
 
  if( sayilar[sayac] < min )//En k���k say�y� bulur.
   min = sayilar[sayac];
 }
 
 printf("\n En Buyuk Sayi : %i ",max);//En b�y�k say�y� ekrana yazd�r�r.
 printf("\n En Kucuk Sayi : %i ",min);////En k���k say�y� bulur.
 
 getch();
}
