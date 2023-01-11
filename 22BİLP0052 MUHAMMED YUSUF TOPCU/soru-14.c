#include <stdio.h>
#include <conio.h>
 
int main()
{
 float yuzde = 0;
 //Yüzde deðeri girilir.
 printf("\n Bir not girin (0-100): ");//Kiþiden not girilmesi istenir.
 scanf("%f",&yuzde);
 
 if( yuzde >= 80 && yuzde <= 100 )//eðer þartý yapýlýr.80 ile 100 arasýnda ise PEKIYI.
  printf("\n PEKIYI ");
 else if( yuzde >= 60 && yuzde < 80 )//60 ile 79 arasýnda ise IYI.
  printf("\n IYI ");
 else if( yuzde >= 40 && yuzde < 60 )//40 ile 59 arasýnda ise ORTA.
  printf("\n ORTA");
 else if( yuzde >= 20 && yuzde < 40 )//20 ile 39 arasýnda ise GEÇER.
  printf("\n GECER ");
 else if( yuzde >= 0 && yuzde < 20 )//0 ile 19 arasýnda ise KALDI.
  printf("\n KALDI");
 else
  printf("\n GECERSIZ NOT!...");
 
 getch();
}
