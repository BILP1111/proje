// 5 öðrencinin boylarýný ve kilolarýný sorarak boy ve ilo ortalamasýný bulan program.

#include <stdio.h> // KÜTÜPHANE TANIMLAMA
#include <conio.h> // KÜTÜPHANE TANIMLAMA
 
int main()
{
 float boy[5],kilo[5]; // ONDALIKLI SAYI DEÐERÝNDE boy ve kilo DEÐERÝ TANIMLAMA VE 5 KRÝTERÝ BELÝRLEME
 float yuksekkilo=0,yuksekboy=0; // ONDALIKLI SAYI DEÐERÝNDE yuksekkilo DEÐERÝNÝ 0 A EÞÝTLEME VE yuksekboy DEÐERÝNÝ 0 A EÞÝTLEME
 float ortboy=0,ortkilo=0; // ONDALIKLI SAYI DEÐERÝNDE ortboy DEÐERÝNÝ 0 A EÞÝTLEME VE ortkilo DEÐERÝNÝ 0 A EÞÝTLEME 
 int n = 0; // SAYISAL DEÐERDE n DEÐERÝNÝ TANIMLAMA VE 0 A EÞÝTLEME
 
 for( n=0; n<5; n++) // DÖNGÜ AÇIP n DEÐERÝNÝ 0 dan n DEÐERÝ 5 OLANA KADAR n yi 1 ARTTIRMA
 {
  printf("\n %d. Ogrencinin",n+1); // n DEÐERÝNÝ 1 ARTTIRIP DEÐERÝ EKRANDA GÖSTERME
 
  printf("\nBoyu : "); // KULLANICIDAN DEÐER ALMA
  scanf("%f",&boy[n]); // DEÐERÝ HAFIZADA TUTMA
 
  printf("Kilosu : "); // KULLANICIDAN DEÐER ALMA
  scanf("%f",&kilo[n]); // DEÐERÝ HAFIZADA TUTMA
  yuksekboy = yuksekboy + boy[n]; // yuksekboy DEÐERÝNÝ yuksekboy ve boy[n] DEÐERÝNÝ TOPLAYIP DEÐERE EÞÝTLEME
  yuksekkilo = yuksekkilo + kilo[n]; // yuksekkilo DEÐERÝNÝ yuksekkilo + kilo[n] DEÐERÝNÝ TOPLAYIP DEÐERE EÞÝTLEME
 }
 
 ortboy = yuksekboy/5; // ortboy DEÐERÝNÝ yuksekboy DEÐERÝNÝ 5 E BÖLEREK DEÐERE EÞÝTLEME
 ortkilo = yuksekkilo/5; // ortkilo DEÐERÝNÝ yuksekkilo DEÐERÝNÝ 5 E BÖLEREK DEÐERE EÞÝTLEME
 
 printf("\n Agirlik Ortalamasi : %.2f ",ortboy); // ortboy DEÐERÝNÝ EKRANDA GÖSTERME
 printf("\n Boy Ortalamasi : %.2f ",ortkilo); // ortkilo DEÐERÝNÝ EKRANDA GÖSTERME
 
 return 0;
}
