#include <stdio.h>
#include <conio.h>
 
int main(void)
{
 int sayilar[5];
 int n = 0;
 int buyuk = 0, kucuk = 0;
 int temp = 0;
 char devammi;
 char siralama;
 
 do
 {
 
   printf("\n Sayilari Siralama...");
   printf("\n ====================");
   printf("\n Sayilari Giriniz...\n\n");
 
   for(n=0 ; n < 5; n++)
   {
    printf(" %i. sayi : ",n+1);
    scanf("%i",&sayilar[n]);
    fflush(stdin);
   }
 
   printf("\n Siralama Duzeni\n (D-Duz | T-Ters) : ");
   scanf("%c",&siralama);
   fflush(stdin);
 
   printf("\n\n Siralama Oncesi...");
   printf("\n ==================\n");
 
   for(n=0 ; n < 5; n++)
   {
    printf(" %i -> ",sayilar[n]);
   }
 
   if( siralama == 'D' || siralama == 'd' )
   {
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
  }
  else if( siralama == 'T' || siralama == 't' )
  {
   for( buyuk=0; buyuk<4 ; buyuk++)
   {
    for( kucuk = buyuk+1; kucuk<5; kucuk++)
    {
     if( sayilar[buyuk] < sayilar[kucuk] )
     {
      temp = sayilar[buyuk];
      sayilar[buyuk] = sayilar[kucuk];
      sayilar[kucuk] = temp;
     }
    }
   }
  }
  else
  {
   printf("Hatali siralama duzeni girdin");
   continue;
  }
 
  printf("\n Siralama Sonrasi");
  printf("\n ===========\n");
 
  for(n=0 ; n < 5; n++)
  {
   printf(" %i -> ",sayilar[n]);
  }
 
  printf("\n Tekrar siralama yapmak istiyor musunuz (E/H) : ");
  devammi = getchar();
  fflush(stdin);
 }
 while( devammi == 'E' || devammi == 'e');
}
