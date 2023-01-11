#include <stdio.h>
#include <conio.h>
 
int main()
{
 int gun = 0;
 //Gün deðer atamasý yapýlýr.
 
 printf("\n Haftanin Gunleri...");//Bir haftanýn günleri
 printf("\n ===================");
 
 printf("\n Bir gun numarasi giriniz : ");//1 ile 7 arasýnda numara giriniz.7 den büyük ise Geçersiz gün numarasý.
 scanf("%i",&gun);
 
 if( gun == 1 )//Eðer ile gün þartlarý yapýlýr.
  printf("\n Pazartesi");
 else if( gun == 2 )
  printf("\n Sali");
 else if( gun == 3 )
  printf("\n Carsamba");
 else if( gun == 4 )
  printf("\n Persembe");
 else if( gun == 5 )
  printf("\n Cuma");
 else if( gun == 6 )
  printf("\n Cumartesi");
 else if( gun == 7 )
  printf("\n Pazar");
 else
  printf("\n Gecersiz gun numarasi...");//Hatalý sayý.
 
 getch();
}
