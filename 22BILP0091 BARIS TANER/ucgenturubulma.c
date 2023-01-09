#include <stdio.h>
#include <conio.h>
 
void main(void) // Bir üçgenin girilen üç kenarına göre üçgen türünü bulan program
{
 int kenar1 = 0, kenar2 = 0, kenar3 = 0;
 
 
 printf("\n Ucgenin Kenarlari : ");
 
 printf("\n 1. Kenar : ");
 scanf("%i",&kenar1);
 fflush(stdin);
 
 printf("\n 2. Kenar : ");
 scanf("%i",&kenar2);
 fflush(stdin);
 
 printf("\n 3. Kenar : ");
 scanf("%i",&kenar3);
 fflush(stdin);
 
 if( (kenar1 == kenar2 ) && ( kenar2 == kenar3) ) // Girilen 3 kenar da eşit ise eşkenar üçgen 
 {
  printf("\n Tum kenarlar esit. ");
  printf("\n Bu bir eskenar ucgendir.");
 }
 else if( (kenar1 == kenar2 ) || (kenar2 == kenar3) || (kenar1 == kenar3) ) // Girilen 2 kenar da eşit ise ikizkenar üçgen 
 {
  printf("\n Iki kenar esit.");
  printf("\n Bu bir ikizkenar ucgendir.");
 }
 else // Hiçbiri değil ise karma
 {
  printf("\n Kenarlar esit degil.");
  printf("\n Karma bir ucgendir.");
 }
 
 getch();
}