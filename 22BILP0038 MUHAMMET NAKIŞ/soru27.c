// Girilen bir sayinin kuvvetini hesaplayan program.(Normal ve pow() ile)

#include <stdio.h> // KÜTÜPHANE TANIMLAMA 

int main()
{
 int taban = 0; // SAYISAL DEÐER TANIMLAMA VE SIFIRA EÞÝTLEME
 int uskuvvet = 0; // SAYISAL DEÐER TANIMLAMA VE SIFIRA EÞÝTLEME
 int sonuc = 1; // SAYISAL DEÐER TANIMLAMA VE 1 E EÞÝTLEME
 int d = 0; // SAYISAL DEÐER TANIMLAMA VE SIFIRA EÞÝTLEME 
 
 printf("\n Bir sayi giriniz: "); // KULLANICIDAN DEÐER ALMA
 scanf("%d",&taban); // DEÐERÝ HAFIZADA TUTMA 

 printf("\n Kuvveti giriniz: "); // KULLANICIDAN DEÐER ALMA
 scanf("%d",&uskuvvet); // DEÐERÝ HAFIZADA TUTMA

 for( d = 1; d <= uskuvvet; d++) // DÖNGÜ AÇMA d DEÐERÝNÝ 1 E EÞÝTLEYÝP d<= uskuvvet VE d YÝ 1 ARTTIRMA
 {
  sonuc = sonuc * taban; // sonuc DEÐERÝNÝ sonuc * taban DEÐERÝNÝN SONUCUNA EÞÝTLÝYORUZ
 }
 
 printf("\n %d^%d = %li\n\n",taban,uskuvvet,sonuc); // SONUCLARI EKRANDA ÇAÐIRIYORUZ 
 
 return 0;
}
