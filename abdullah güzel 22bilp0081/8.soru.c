/* yaşı alınan kişinin ay hafta gün saat dakika ve saniyeye çevrilmesini veren program */
#include <stdio.h>

 
main()
{
int yas;
int ay;
int hafta;
int gun;
int saat;
int dakika;
int saniye;
 
 
printf("\n Yasiniz kac : ");
scanf("%d",&yas);

 
ay =yas * 12;
hafta =yas * 52;
gun =yas * 365;
saat =yas * 365 * 24;
dakika =yas * 365 * 24 * 60;
saniye = yas * 365 * 24 * 60 * 60;
 

printf("\n %d ay",ay);
printf("\n %d hafta",hafta);
printf("\n %d gun",gun);
printf("\n %d saat",saat);
printf("\n %d dakika",dakika);
printf("\n %d saniye",saniye);
 
 
 getch();
}