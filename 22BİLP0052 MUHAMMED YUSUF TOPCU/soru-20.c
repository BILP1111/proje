#include <stdio.h>
#include <conio.h>
 
int main()
{
 int kenar1 = 0, kenar2 = 0, kenar3 = 0;
 //Kenar uzunlaklarý için deðer atama iþlemi yapýlýr.

 printf("\n Ucgenin Kenarlari : ");
 
 printf("\n 1. Kenar : ");//Üçgenin 1.Kenar uzunluklarýný Giriniz.
 scanf("%i",&kenar1);
 
 printf("\n 2. Kenar : ");//Üçgenin 2.Kenar uzunluklarýný Giriniz.
 scanf("%i",&kenar2);
 
 printf("\n 3. Kenar : ");//Üçgenin 3.Kenar uzunluklarýný Giriniz.
 scanf("%i",&kenar3);
 
 if( (kenar1 == kenar2 ) && ( kenar2 == kenar3) )//Eðer þartý ile kenar baðlantýlarý gösterir.
 {
  printf("\n Tum kenarlar esit. ");//3.Kenar da birbirine eþittir.
  printf("\n Bu bir eskenar ucgendir.");
 }
 else if( (kenar1 == kenar2 ) || (kenar2 == kenar3) || (kenar1 == kenar3) )//Deðilse 
 {
  printf("\n Iki kenar esit.");//2 kenar eþittir.
  printf("\n Bu bir ikizkenar ucgendir.");
 }
 else//Deðilse
 {
  printf("\n Kenarlar esit degil.");//3.Kenarda farklýdýr.
  printf("\n Karma bir ucgendir.");
 }
 
 getch();
}
