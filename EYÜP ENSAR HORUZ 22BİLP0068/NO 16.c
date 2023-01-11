#include <stdio.h>
#include <conio.h>
 
void main(void)
{
 int gun = 0;
 
 clrscr();
 
 printf("\n Haftanin Gunleri");
 printf("\n ===================");
 
 printf("\n Bir gun numarasi giriniz : "); // girilen gün numarasýnýn gun olduðunu programa tanýttýk
 scanf("%i",&gun);
 fflush(stdin);
 
 if( gun == 1 )
  printf("\n Pazartesi");  // gün numaralarýnýn hangi güne denk geldiðini programa tanýttýk
 else if( gun == 2 )
  printf("\n Sali");
 else if( gun == 3 )
  printf("\n Carsamba");	// eðer 1 ise pazartesi , deðilse eðer 2 ise salý gibi....
 else if( gun == 4 )
  printf("\n Persembe");
 else if( gun == 5 )
  printf("\n Cuma");
 else if( gun == 6 )
  printf("\n Cumartesi");
 else if( gun == 7 )
  printf("\n Pazar");
 else
  printf("\n Gecersiz gun numarasý...");
 
 getch();
}
