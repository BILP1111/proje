#include <stdio.h>
#include <conio.h>
 
 main(void)
{
 int sayi = 0;
 int n = 0;
 long int sonuc = 1;
 
 printf("\n Faktoriyel...");
 printf("\n =============");
 
 printf("\n Bir Sayi giriniz : ");
 scanf("%i",&sayi);
 
 for( n = 1;n <= sayi; n++)
 {
  sonuc = sonuc * n;
 }
 
 printf("\n %i! = %li ",sayi,sonuc);
 
 getch();
}
