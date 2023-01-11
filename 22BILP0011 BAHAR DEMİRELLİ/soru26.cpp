#include <stdio.h>
 
int main()
{
 int sayi = 0;
 int n = 0;
 long int sonuc = 1;
 
 
 printf("\n Faktoriyel...");
 printf("\n =============");
 
 printf("\n Bir Sayi giriniz : ");
 scanf("%i",&sayi);
 fflush(stdin); //Çýkýþ akýþlarý için, akýþýn arabelleðindeki yazýlmamýþ veriyi ilgili çýkýþ aygýtýna yazar.
 
 for( n = 1;n <= sayi; n++)
 {
  sonuc = sonuc * n;
 }
 
 printf("\n %i! = %li ",sayi,sonuc);
 
 return 0;
}

//For döngüsü, programlama dillerinde temel olarak bir kod blokunu belirli bir sayýda ve üst üste çalýþtýrmak için kullanýlan bir döngüdür.
