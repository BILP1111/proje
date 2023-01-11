#include <stdio.h>
#include <conio.h>
 
 main(void)
{
 char evli = ' ';
 int cocuk = 0;
 
 printf("\n Sonuca bagli karsilastirmalar...");
 printf("\n ================================");
 
 printf("\n Evli misiniz? : ");
 scanf("%c",&evli);
 
 if( evli == 'E' || evli == 'e' )
 {
  printf("\n Kac cocugunuz var? : ");
  scanf("%i",&cocuk);
 
  if( cocuk > 2)
  {
    printf("\n Buyuk bir aileniz var.");
  }
  else
  {
   printf("\n Kucuk bir aileniz var.");
  }
 }
 else if( evli == 'H' || evli == 'h' )
  printf("\n Evli degilsiniz demek. Hmmmm..");
 else
  printf("\n Gecersiz girdi.");
 
getch();
}
