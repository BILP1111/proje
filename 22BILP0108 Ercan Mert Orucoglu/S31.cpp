#include <stdio.h>
int main(void)
{
 int sayi = 0;
  
 while( sayi >= 0)
 {
  printf("\t Sayi: ");
  scanf("%i",&sayi);
  fflush(stdin);
 
  printf("%i sayisini girdiniz",sayi);
 }
}

// kullan�c� negatif birt say� girinceye kadar kullan�c�dan say� isteyen program
