#include <stdio.h>
#include <conio.h>
 
void main(void)
{
 int gun = 0;
 
 clrscr();
 
 printf("\n Haftanin Gunleri");
 printf("\n ===================");
 
 printf("\n Bir gun numarasi giriniz : "); // girilen g�n numaras�n�n gun oldu�unu programa tan�tt�k
 scanf("%i",&gun);
 fflush(stdin);
 
 if( gun == 1 )
  printf("\n Pazartesi");  // g�n numaralar�n�n hangi g�ne denk geldi�ini programa tan�tt�k
 else if( gun == 2 )
  printf("\n Sali");
 else if( gun == 3 )
  printf("\n Carsamba");	// e�er 1 ise pazartesi , de�ilse e�er 2 ise sal� gibi....
 else if( gun == 4 )
  printf("\n Persembe");
 else if( gun == 5 )
  printf("\n Cuma");
 else if( gun == 6 )
  printf("\n Cumartesi");
 else if( gun == 7 )
  printf("\n Pazar");
 else
  printf("\n Gecersiz gun numaras�...");
 
 getch();
}
