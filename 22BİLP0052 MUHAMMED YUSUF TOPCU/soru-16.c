#include <stdio.h>
#include <conio.h>
 
int main()
{
 int gun = 0;
 //G�n de�er atamas� yap�l�r.
 
 printf("\n Haftanin Gunleri...");//Bir haftan�n g�nleri
 printf("\n ===================");
 
 printf("\n Bir gun numarasi giriniz : ");//1 ile 7 aras�nda numara giriniz.7 den b�y�k ise Ge�ersiz g�n numaras�.
 scanf("%i",&gun);
 
 if( gun == 1 )//E�er ile g�n �artlar� yap�l�r.
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
  printf("\n Gecersiz gun numarasi...");//Hatal� say�.
 
 getch();
}
