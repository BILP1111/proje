#include <stdio.h>
#include <conio.h>

// Girilen bir asal sayý ise bundan sonraki 10 asal sayiyida listeleyen program
 
int main(void)
{
 int sayi = 0, n = 0, sayac = 0;
 char asal = 'E';
 
 printf("\n Bir sayi giriniz: ");
 scanf("%i",&sayi);
 fflush(stdin);
 
 for(n=2;n<sayi;n++)
 {
  if( sayi % n == 0 )
  {
   asal = 'H';
   break;
  }
 }
 
 if( asal == 'E' )
 {
  printf("\n %i asal sayisindan sonraki ",sayi);
  printf("10 asal sayi :\n");
  sayi= sayi + 1;
 
  while(sayac < 10)
  {
   asal = 'E';
 
   for(n=2;n<sayi;n++)
   {
    if( sayi % n == 0 )
    {
     asal = 'H';
     break;
    }
   }
   if(asal == 'E' )
   {
    printf("%i\t",sayi);
    sayac++;
   }
 
   sayi++;
  }
 }
 else
  printf("\n %i asal sayi degildir.",sayi);

}
