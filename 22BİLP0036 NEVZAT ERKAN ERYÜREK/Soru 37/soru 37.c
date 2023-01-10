#include <stdio.h>
#include <conio.h>
 
void main(void)
{
 int sayilar[10];
 int sayac = 0;
 int max = 0;
 int min = 0;
 
 printf("\n Maximum ve Minimum...");
 printf("\n ===================== \n");
 
 for(sayac=0 ; sayac < 10; sayac++)
 {
  printf("%i. Sayi : ",sayac+1);
  scanf("%i",&sayilar[sayac]);
  fflush(stdin);
 
  if( sayac == 0 )
   min = sayilar[0];
 
  if( sayilar[sayac] > max )
   max = sayilar[sayac];
 
  if( sayilar[sayac] < min )
   min = sayilar[sayac];
 }
 
 printf("\n En Buyuk Sayi : %i ",max);
 printf("\n En Kucuk Sayi : %i ",min);
 
 getch();
}
