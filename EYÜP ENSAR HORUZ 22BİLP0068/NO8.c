#include <stdio.h>
#include <conio.h>
#include <string.h>
 
void main(void)  // BOÞ 
{
 int yas = 0;     // YAÞ AY HAFTA GUN SAAT DAKÝKA SANÝYE PROGRAMA TANITILIR
 int ay = 0;
 int hafta = 0;
 long int gun = 0;
 long int saat = 0;
 long int dakika = 0;
 long int saniye = 0;
 
 clrscr();
 
 printf("\n Yasinizi Giriniz : ");   // kullannýcýnýn yasi sorulur ve girilen bilgi programa yas diye tanýtýlýr
 scanf("%i",&yas);
 fflush(stdin);
 
 ay = (int) yas * 12;         // girilen bilgiler formüllerine göre nasýl gösterileceði bve hesaplanacðaý programa tanýtýlýr
 hafta = (int) yas * 52;
 gun = (long int) yas * 365;
 saat = (long int) yas * 365 * 24;
 dakika = (long int) yas * 365 * 24 * 60;
 saniye = (long int) yas * 365 * 24 * 60 * 60;
 
 printf("\n%10d ay",ay);
 printf("\n%10d hafta",hafta);      /// giriken bilgiler kullancýýya programda belitrildiði gibi sunulur saat dakika saniye oalrak verilir
 printf("\n%10ld gun",gun);
 printf("\n%10ld saat",dakika);
 printf("\n%10ld dakika",dakika);
 printf("\n%10li saniye",saniye);
 printf("\nyasamissiniz.");
 
 getch();
}
