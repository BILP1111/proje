#include <stdio.h>
#include <conio.h>
 
int main()
{
int yil = 0;
//Y�l de�er atar.
 
printf("\n Artik yil tespiti...");//Girilen Say�n�n Y�l Tespiti
printf("\n =================");
 
printf("\n Kontrol edilecek yili giriniz : ");//Kontrol edilir.
scanf("%i",&yil);
 
if( yil % 4 == 0 || yil %400 == 0 )//E�er �art� sorulur.

printf("\n %i yili artik yildir. ");//Girdi�iniz say� y�ld�r.
else
printf("\n %i yili artik yil degildir.");//Girdi�iniz say� y�l de�ildir.
 
getch();
}
