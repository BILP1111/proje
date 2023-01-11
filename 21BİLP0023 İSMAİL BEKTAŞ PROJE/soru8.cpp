#include <stdio.h>
#include <conio.h>
#include <string.h>
 
 main(void)
{
 int yas = 0;
 int ay = 0;
 int hafta = 0;
 long int gun = 0;
 long int saat = 0;
 long int dakika = 0;
 long int saniye = 0;
 
 printf("\n Yasiniz kac : ");
 scanf("%i",&yas);
 
 ay = (int) yas * 12;
 hafta = (int) yas * 52;
 gun = (long int) yas * 365;
 saat = (long int) yas * 365 * 24;
 dakika = (long int) yas * 365 * 24 * 60;
 saniye = (long int) yas * 365 * 24 * 60 * 60;
 
 printf("\n Yasiniz %i olduguna gore :",yas);
 printf("\n%10d ay",ay);
 printf("\n%10d hafta",hafta);
 printf("\n%10ld gun",gun);
 printf("\n%10ld saat",dakika);
 printf("\n%10ld dakika",dakika);
 printf("\n%10li saniye",saniye);
 printf("\nyasamissiniz.");
 
 getch();
}
