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

// kullanýcý negatif birt sayý girinceye kadar kullanýcýdan sayý isteyen program
