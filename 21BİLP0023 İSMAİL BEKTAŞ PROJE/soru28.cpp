#include <stdio.h>
#include <conio.h>
 
 main(void)
{
 int baslangic = 0;
 int bitis = 0;
 int sayi = 0;
 int n = 0;
 char asal = 'E';
 
 printf("\n Verilen araliktaki asal sayilar...");
 
 printf("\n Baslangic : ");
 scanf("%i",&baslangic);
 
 printf("\n Bitis : ");
 scanf("%i",&bitis);
 
 printf("\n\n %i ve %i arasindaki asal sayilar : ",baslangic,bitis);

 for( sayi = baslangic ; sayi <= bitis ; sayi++ )
 {
  asal = 'E';
  for( n = 2 ; n < sayi ; n++ )
  {
   if( sayi % n == 0 )
    asal = 'H' ;
  }
  if( asal == 'E' )
   printf("\t%i",sayi);
 }
 
 getch();
}
