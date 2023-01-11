#include <stdio.h>
#include <conio.h>
 
 main(void)
{
 int kenar1,kenar2;
 float karesi,cevresi;

 printf ("Lutfen 1. kenar degerini giriniz? (m): ");
 scanf("%d",&kenar1);
 
 printf ("Lutfen 2. kenar degerini giriniz? (m): ");
 scanf("%d",&kenar2);
 
 karesi = float(kenar1) * float(kenar2);
 cevresi = 2 * (float(kenar1) + float(kenar2));
 
 printf ("\n\nDikdortgenin Alani %.0f mi ve Cevresi %.0f m'dir .", karesi, cevresi);
 
 getch();
}
