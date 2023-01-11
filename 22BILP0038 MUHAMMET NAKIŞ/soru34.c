// Girilen bir sayinin "mükkemmel sayi" olup olmadýðýný bulan program.

#include <stdio.h> // KÜTÜPHANE TANIMLAMA
#include <conio.h> // KÜTÜPHANE TANIMLAMA
#include <math.h> // KÜTÜPHANE TANIMLAMA
 
int main() {
 int sayi = 0; // SAYI TÜRÜNDE DEÐER TANIMLAMA
 int no = 0; // SAYI TÜRÜNDE DEÐER TANIMLAMA
 int rakam = 0; // SAYI TÜRÜNDE DEÐER TANIMLAMA
 int toplam = 0; // SAYI TÜRÜNDE DEÐER TANIMLAMA
 
 
 printf("\n Bir sayi giriniz : ") ; // KULLANICIDAN DEÐER ALMA
 scanf("%d",&sayi); // DEÐERÝ HAFIZADA TUTMA
 
 mukkemmel = sayi; // mükkemmel DEÐERÝNÝ sayi DEÐERÝNE EÞÝTLEME
 
 while( mukkemmel > 0 ) { // mukkemmel DEÐERÝ 0 DAN BÜYÜK KOÞULU
  rakam = mukkemmel%10; // rakam DEÐERÝNÝ mukkemmel DEÐERÝNÝN 10 MODUNU ALIP DEÐERE EÞÝTLÝYORUZ
  toplam = toplam + pow(rakam,3); // TOPLAM DEÐERÝNÝ TOPLAM + POW YANÝ KARESÝNÝ ALARAK EÞÝTLÝYORUZ
  mukkemmel = mukkemmel/10; // mukkemmel DEÐERÝNÝ mukkemmel DEÐERÝNÝ 10 A BÖLEREK DEÐERE EÞÝTLÝYORUZ
 }
 
 if( toplam == sayi ) // EÐER toplam == sayi ÝSE
  printf("\n %i sayisi mukemmel sayidir.",sayi); // sayi DEÐERÝNÝ EKRANA YAZDIRMA
 else // DEÐÝLSE
  printf("\n %i sayisi mukemmel sayi degildir.",sayi); // sayi DEÐERÝNÝ EKRANA YAZDIRMA
 
 return 0;
}
