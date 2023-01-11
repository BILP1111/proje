// Girilen bir sayidaki rakamlarýn toplamaný bulan program

#include <stdio.h> // KÜTÜPHANE TANIMLAMA
#include <conio.h> // KÜTÜPHANE TANIMLAMA
 
int main() 
{
 int sayi = 0; // SAYISAL DEÐER TANIMLAMA VE 0 A EÞÝTLEME
 int rakam = 0; // SAYISAL DEÐER TANIMLAMA VE 0 A EÞÝTLEME
 int toplam = 0; // SAYISAL DEÐER TANIMLAMA VE 0 A EÞÝTLEME
 
 printf("\nBir Sayi Giriniz : "); // KULLANICIDAN DEÐER ALMA
 scanf("%d",&sayi); // DEÐERÝ HAFIZADA TUTMA
 
 while( sayi > 0 ) // WHÝLE DÖNGÜSÜYLE sayi > 0 KOÞUNU KOYMA
 {
  rakam = sayi%10; // rakam DEÐERÝNÝ sayi DEÐERÝNÝN 10 MODUNU ALMA
  toplam = toplam + rakam; // toplam DEÐERÝNÝ toplam DEÐERÝ ÝLE rakam DEÐERÝNÝ TOPLAYIP DEÐERE EÞÝTLÝYORUZ
  sayi = sayi/10; // sayi DEÐERÝNÝ sayi / 10 DEÐERÝNE EÞÝTLEME
 }
 
 printf("\nSayidaki rakamlarin toplami %d",toplam); // TOPLAM SONUCUNU EKRANA YANSITIYORUZ
 
 return 0;
}
