#include <stdio.h>
#include <conio.h>
 
int main()
{
 int kenar1 = 0, kenar2 = 0, kenar3 = 0;
 //Kenar uzunlaklar� i�in de�er atama i�lemi yap�l�r.

 printf("\n Ucgenin Kenarlari : ");
 
 printf("\n 1. Kenar : ");//��genin 1.Kenar uzunluklar�n� Giriniz.
 scanf("%i",&kenar1);
 
 printf("\n 2. Kenar : ");//��genin 2.Kenar uzunluklar�n� Giriniz.
 scanf("%i",&kenar2);
 
 printf("\n 3. Kenar : ");//��genin 3.Kenar uzunluklar�n� Giriniz.
 scanf("%i",&kenar3);
 
 if( (kenar1 == kenar2 ) && ( kenar2 == kenar3) )//E�er �art� ile kenar ba�lant�lar� g�sterir.
 {
  printf("\n Tum kenarlar esit. ");//3.Kenar da birbirine e�ittir.
  printf("\n Bu bir eskenar ucgendir.");
 }
 else if( (kenar1 == kenar2 ) || (kenar2 == kenar3) || (kenar1 == kenar3) )//De�ilse 
 {
  printf("\n Iki kenar esit.");//2 kenar e�ittir.
  printf("\n Bu bir ikizkenar ucgendir.");
 }
 else//De�ilse
 {
  printf("\n Kenarlar esit degil.");//3.Kenarda farkl�d�r.
  printf("\n Karma bir ucgendir.");
 }
 
 getch();
}
