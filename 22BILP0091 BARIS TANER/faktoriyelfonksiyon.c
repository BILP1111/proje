#include <stdio.h>
#include <conio.h>
 
void main(void) // Girilen bir sayinin faktoriyelini fonksiyon yardimiyla hesaplayan program
{
      long int faktoriyel(int);
      int sayi = 0;
      long int fact = 0;
 
 
      printf("\n Faktoriyel hesaplama...");
      printf("\n =======================");
 
      printf("\n Sayiyi giriniz : ");
      scanf("%i",&sayi);
      fflush(stdin);
 
      fact = faktoriyel(sayi);
      printf("\n %i! = %li ",sayi,fact);
      getch();
}
 
long int faktoriyel( int num )
{
      int n = 0;
      long int sonuc = 1;
 
      for( n = 1;n <= num; n++)
      {
            sonuc = sonuc * n;
      }
      return sonuc;
}