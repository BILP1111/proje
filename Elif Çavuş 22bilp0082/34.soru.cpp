#include <stdio.h> // KÜTÜPHANE TANIMLAMA
#include <conio.h> // KÜTÜPHANE TANIMLAMA
#include <math.h> // KÜTÜPHANE TANIMLAMA
 
int main() {
 int sayi = 0; // SAYI TÜRÜNDE DEĞER TANIMLAMA
 int no = 0; // SAYI TÜRÜNDE DEĞER TANIMLAMA
 int rakam = 0; // SAYI TÜRÜNDE DEĞER TANIMLAMA
 int toplam = 0; // SAYI TÜRÜNDE DEĞER TANIMLAMA
 int mukemmel;
 
 printf("\n Bir sayi giriniz : ") ; // KULLANICIDAN DEĞER ALMA
 scanf("%d",&sayi); // DEĞERİ HAFIZADA TUTMA
 
 mukemmel = sayi; // mükkemmel DEĞERİNİ sayi DEĞERİNE EŞİTLEME
 
 while( mukemmel > 0 ) { // mukkemmel DEĞERİ 0 DAN BÜYÜK KOŞULU
  rakam = mukemmel%10; // rakam DEĞERİNİ mukkemmel DEĞERİNİN 10 MODUNU ALIP DEĞERE EŞİTLİYORUZ
  toplam = toplam + pow(rakam,3); // TOPLAM DEĞERİNİ TOPLAM + POW YANİ KARESİNİ ALARAK EŞİTLİYORUZ
  mukemmel = mukemmel/10; // mukkemmel DEĞERİNİ mukkemmel DEĞERİNİ 10 A BÖLEREK DEĞERE EŞİTLİYORUZ
 }
 
 if( toplam == sayi ) // EĞER toplam == sayi İSE
  printf("\n %i sayisi mukemmel sayidir.",sayi); // sayi DEĞERİNİ EKRANA YAZDIRMA
 else // DEĞİLSE
  printf("\n %i sayisi mukemmel sayi degildir.",sayi); // sayi DEĞERİNİ EKRANA YAZDIRMA
 
 return 0;
}
