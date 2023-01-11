#include <stdio.h>
#include<conio.h>
main(void)
{
 int kenar;
 float sonuc;
 printf ("Lutfen karenin bir kenar degeri giriniz? (m): ");
 scanf("%d",&kenar);
 
 sonuc = float(kenar) * float(kenar);
 printf ("\n\nKarenin Alani %ld mý ve ",long(sonuc));
 
 printf ("Cevresi %5.0f m'dir.",(4*float(kenar)));
 getch();
}
