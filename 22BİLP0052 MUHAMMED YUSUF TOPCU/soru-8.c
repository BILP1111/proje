#include <stdio.h>
#include <conio.h>
 
int main()
{
 int yas = 0;
 int ay = 0;
 int hafta = 0;
  int gun = 0;
  int saat = 0;
  int dakika = 0;
  int saniye = 0;
  //de�er atamalar� yap�l�r.

 
 printf("\n Yasiniz kac : ");//ki�iden ya� bilgisi istenir.
 scanf("%i",&yas);

 
 ay = (int) yas * 12;
 hafta = (int) yas * 52;
 gun = (int) yas * 365;
 saat = (int) yas * 365 * 24;
 dakika = (int) yas * 365 * 24 * 60;
 saniye = (int) yas * 365 * 24 * 60 * 60;
 //Form�ller yaz�l�r.
 
 printf("\n Yasiniz %i olduguna gore :",yas);
 printf("\n %10d ay",ay);
 printf("\n %10d hafta",hafta);
 printf("\n %10ld gun",gun);
 printf("\n %10ld saat",dakika);
 printf("\n %10ld dakika",dakika);
 printf("\n %10li saniye",saniye);
 printf("\n yasamissiniz.");
 //Girilen Bilgilerle Ki�inin ay,hafta,g�n,saat,dakika,saniye bilgileri ekrana yaz�l�r.
 
 getch();
}
