#include <stdio.h>
#include <conio.h>
 
int main()
{
 char evli = ' ';
 int cocuk = 0;
 //deðer atanýr.
 
 
 printf("\n Sonuca bagli karsilastirmalar...");
 printf("\n ================================");
 
 printf("\n Evli misiniz? : ");//Kiþinin Medeni Halini Sorar.
 scanf("%c",&evli);
 
 if( evli == 'E' || evli == 'e' )//Eðer "e","E" ise evli
 {
  printf("\n Kac cocugunuz var? : ");//Kiþiye sorulur.
  scanf("%i",&cocuk);
 
  if( cocuk > 2)//Eðer 2 çocuktan fazla varsa büyük ailedir.
  {
    printf("\n Buyuk bir aileniz var.");
  }
  else//Deðilse 2 den küçük ise küçük aileniz var
  {
   printf("\n Kucuk bir aileniz var.");
  }
 }//Deðilse Eðer "H" Evli deðilsiniz.
 else if( evli == 'H' || evli == 'h' )
  printf("\n Evli degilsiniz demek. Hmmmm..");
 else
  printf("\n Gecersiz girdi.");
 
getch();
}
