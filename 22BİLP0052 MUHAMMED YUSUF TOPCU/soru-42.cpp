#include <stdio.h>
#include <conio.h>
 
int main()
{
 int sayilar[5];
 int n = 0;
 int buyuk = 0, kucuk = 0;
 int temp = 0;
 char devammi;
 char siralama;
 //De�er atama i�lemi yap�l�r.
 
 do
 {
 
   printf("\n Sayilari Siralama...");//Girilen say�lar� d�z ve ters olarak s�ralar.
   printf("\n ====================");
   printf("\n Sayilari Giriniz...\n\n");//5 tane say� giriniz.
 
   for(n=0 ; n < 5; n++)
   {
    printf(" %i. sayi : ",n+1);
    scanf("%i",&sayilar[n]);
   }
 
   printf("\n Siralama Duzeni\n (D-Duz | T-Ters) : ");//S�ralamay� se�iniz.
   scanf("%c",&siralama);
 
   printf("\n\n Siralama Oncesi...");//S�ralamadan �nceki hali.
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
   printf("\n Hatali siralama duzeni girdiniz...");//Hatal� s�ralama
   continue;
  }
 
  printf("\n\n Siralama Sonrasi...");
  printf("\n ===================\n");
 
  for(n=0 ; n < 5; n++)
  {
   printf(" %i -> ",sayilar[n]);
  }
 
  printf("\n\n Tekrar siralama yapmak istiyor musunuz (E/H) : ");
  devammi = getchar();
 }
 while( devammi == 'E' || devammi == 'e');
}
