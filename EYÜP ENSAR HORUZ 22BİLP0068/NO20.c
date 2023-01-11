#include <stdio.h>
#include <conio.h>
 
void main(void)
{
 int kenar1 = 0, kenar2 = 0, kenar3 = 0;
 
 clrscr();
 
 printf("\n Ucgenin Kenarlari : ");  // kenar bilgileri girilir ve programa kenar 1 2 ve 3 diye tanıtılır
 
 printf("\n 1. Kenar : ");
 scanf("%i",&kenar1);
 fflush(stdin);
 
 printf("\n 2. Kenar : ");
 scanf("%i",&kenar2);
 fflush(stdin);
 
 printf("\n 3. Kenar : ");
 scanf("%i",&kenar3);
 fflush(stdin);
 
 if( (kenar1 == kenar2 ) && ( kenar2 == kenar3) )  
 {
  printf("\n Tum kenarlar esit. ");
  printf("\n Bu bir eskenar ucgendir.");  // eğer kenar 1 ve 2 veya kenar 2 ve 3 birbirine eşitse eşkenar ü.gendir
 }
 else if( (kenar1 == kenar2 ) || (kenar2 == kenar3) || (kenar1 == kenar3) )
 {
  printf("\n Iki kenar esit.");
  printf("\n Bu bir ikizkenar ucgendir.");
 }
 else
 {
  printf("\n Kenarlar esit degil.");
  printf("\n Karma bir ucgendir.");
 }
 
 getch();
}
