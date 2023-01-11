// Kullanýcý negatif bir sayi girinceye kadar kullanýcýdan bir sayi girmesini isteyen ve girilen sayiyi ekrana yazdiran program.

#include <stdio.h> // KÜTÜPHANE TANIMLAMA
#include <conio.h> // KÜTÜPHANE TANIMLAMA
 
int main()
{
 int sayi = 0; // SAYISAL DEÐERDE DEÐER TANIMLAMA
 
 while( sayi >= 0) // sayi >= 0 KOÞULU VERME
 {
  printf("\nLutfen bir sayi giriniz: "); // KULLANICIDAN DEÐER ALMA
  scanf("%d",&sayi); // DEÐERÝ HAFIZADA TUTMA
 
  printf("Girdiginiz sayi: %d ",sayi); // sayi DEÐERÝNÝ EKRANDA GÖSTERME
 }
 
 return 0;
}
