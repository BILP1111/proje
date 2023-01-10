#include <stdio.h>
#include <conio.h>
 
void main(void)
{
 int sayi1=0;
 int sayi2=0;
 int toplam=0;
  
 printf("\nIki sayi giriniz... ");
 printf("\n=================== ");
 
 printf("\nIlk Sayi: ");
 scanf("%i",&sayi1);
 fflush(stdin);
 
 printf("\nIkinci sayi: ");
 scanf("%i",&sayi2);
 fflush(stdin);
 
 toplam = sayi1 + sayi2;
 printf("\n\n%d + %d = %d eder.",sayi1, sayi2, toplam);
 
 getch();
}
