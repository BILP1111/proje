// Girilen 10 sayi içerisinde en büyük ve en küçük olan sayilari bulan program.

#include <stdio.h> // KÜTÜPHANE TANIMLAMA
#include <conio.h> // KÜTÜPHANE TANIMLAMA
 
int main()
{
 int sayilar[10]; // SAYISAL DEÐERÝNDE sayilar DEÐERÝ TANIMLAMA VE 10 KRÝTERÝ BELÝRLEME
 int sayac = 0; // SAYISAL DEÐERÝNDE sayac DEÐERÝ TANIMLAMA VE 0 A EÞÝTLEME
 int max = 0; // SAYISAL DEÐERÝNDE max DEÐERÝ TANIMLAMA VE 0 A EÞÝTLEME
 int min = 0; // SAYISAL DEÐERÝNDE min DEÐERÝ TANIMLAMA VE 0 A EÞÝTLEME
 
 for(sayac=0 ; sayac < 10; sayac++) // DÖNGÜ AÇMA  ve sayac DEÐERÝNÝ 10 DAN KÜÇÜK OLANA KADAR VE sayacý 1 ARTTIRMA
 {
  printf("%d. Sayi : ",sayac+1); // sayac DEÐERÝNÝ EKRANA GETÝRME VE 1 ARTTIRMA 
  scanf("%d",&sayilar[sayac]); // DEÐERLERÝ HAFIZADA TUTMA
 
  if( sayac == 0 ) // EÐER sayac == 0 ÝSE
   min = sayilar[0]; // min DEÐERÝNÝ sayilar[0] DEÐERÝNE EÞÝTLEME
 
  if( sayilar[sayac] > max ) // EÐER sayilar[sayac] > MAX ÝSE
   max = sayilar[sayac]; // max DEÐERÝNÝ sayilar[sayac] DEÐERÝNE EÞÝTLEME
 
  if( sayilar[sayac] < min ) // EÐER sayilar[sayac] < min DEÐERÝNDEN KÜÇÜK ÝSE
   min = sayilar[sayac]; // min DEÐERÝNÝ sayilar[sayac] DEÐERÝNE EÞÝTLEME
 }
 
 printf("\n En Büyük Sayi : %d ",max); // max DEÐERÝNÝ EKRANDA GÖSTERME
 printf("\n En Kucuk Sayi : %d ",min); // min DEÐERÝNÝ EKRANDA GÖSTERME
 
 return 0;
}
