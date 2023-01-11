// 10 tane sayinin çift, tek ve asal olanlarýný ayrý ayrý listeleyen program.

#include <stdio.h> // KÜTÜPHANE TANIMLAMA
#include <conio.h> // KÜTÜPHANE TANIMLAMA
 
int main()
{
 int sayilar[10] = {4,11,15,36,55,83,42,99,18,10}; // SAYISAL DEÐÝÞKEN OLARAK sayilar DEÐERÝ TANIMLIYORUZ VE 10 TANE DEÐÝÞKEN TANIMLIYORUZ
 int sayac = 0; // SAYISAL DEÐÝÞKEN OLARAK sayac DEÐERÝNÝ TANIMLIYORUZ 0 A EÞÝTLÝYORUZ
 int sayi = 0; // SAYISAL DEÐÝÞKEN sayi DEÐERÝNÝ TANIMLIYORUZ 0 A EÞÝTLÝYORUZ
 char asal; // KARAKTER DEÐÝÞKENÝ OLARAK asal DEÐERÝ TANIMLIYORUZ
 
 printf("\n Cift Sayilar : "); // EKRANDA GÖSTERME
 
 for(sayac = 0;sayac<10;sayac++) // sayac DEÐERÝNÝ 0 A EÞÝTLÝYORUZ VE sayac DEÐERÝ 10 DAN KÜÇÜK OLANA KADAR sayac DEÐERÝNÝ 1 ARTTIRIYORUZ
 {
  if (sayilar[sayac]%2 == 0 ) // EÐER sayilar[sayac] DEÐERÝNÝN 2 MODUNU TAM BÖLÜNÜYORSA
   printf("%d\t",sayilar[sayac]); // sayilar[sayac] DEÐERÝNÝ EKRANDA GÖSTERÝYORUZ 
 }
 
 printf("\n\n Tek Sayilar : "); // EKRANDA GÖSTERME
 
 for(sayac = 0;sayac<10;sayac++) // sayac DEÐERÝNÝ 0 A EÞÝTLÝYORUZ VE sayac DEÐERÝ 10 DAN KÜÇÜK OLANA KADAR sayac DEÐERÝNÝ 1 ARTTIRIYORUZ
 {
  if( sayilar[sayac]%2 != 0 ) // EÐER sayilar[sayac] DEÐERÝNÝN 2 MODU ALIYORUZ 0 A EÞÝT DEÐÝL ÝSE
   printf("%d\t",sayilar[sayac]); // sayilar[sayac] DEÐERÝNÝ EKRANDA GÖSTERÝYORUZ  
 }
 
 printf("\n\n Asal Sayilar : ");
 
 for(sayac = 0;sayac<10;sayac++) // sayac DEÐERÝNÝ 0 A EÞÝTLÝYORUZ VE sayac DEÐERÝ 10 DAN KÜÇÜK OLANA KADAR sayac DEÐERÝNÝ 1 ARTTIRIYORUZ
 {
  asal = 'E'; // asal DEÐERÝNÝ "E" YE EÞÝTLÝYORUZ
 
  for( sayi = 2; sayi < sayilar[sayac] ; sayi++ ) // sayi DEÐERÝNÝ 2 YE EÞÝTLÝYORUZ sayi DEÐERÝ sayilar[sayac] OLANA KADAR sayi DEÐERÝNE 1 ARTTIRIYORUZ
  {
   if( sayilar[sayac]%sayi == 0 ) // sayilar[sayac] DEÐERÝNÝN sayi MODUNU ALIYORUZ EÐER TAM BÖLÜNÜYORSA
   {
    asal = 'H'; // asal DEÐERÝNÝ "H" E TANIMLIYORUZ
    break;
   }
  }
 
  if( asal == 'E' ) // EÐER asal DEÐERÝ E ÝSE
   printf("%d\t",sayilar[sayac]); // EKRANA sayilar[sayac] DEÐERÝNÝ ÇAÐIRIYORUZ
 }
 
 return 0;
}
