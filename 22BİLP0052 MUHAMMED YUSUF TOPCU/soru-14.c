#include <stdio.h>
#include <conio.h>
 
int main()
{
 float yuzde = 0;
 //Y�zde de�eri girilir.
 printf("\n Bir not girin (0-100): ");//Ki�iden not girilmesi istenir.
 scanf("%f",&yuzde);
 
 if( yuzde >= 80 && yuzde <= 100 )//e�er �art� yap�l�r.80 ile 100 aras�nda ise PEKIYI.
  printf("\n PEKIYI ");
 else if( yuzde >= 60 && yuzde < 80 )//60 ile 79 aras�nda ise IYI.
  printf("\n IYI ");
 else if( yuzde >= 40 && yuzde < 60 )//40 ile 59 aras�nda ise ORTA.
  printf("\n ORTA");
 else if( yuzde >= 20 && yuzde < 40 )//20 ile 39 aras�nda ise GE�ER.
  printf("\n GECER ");
 else if( yuzde >= 0 && yuzde < 20 )//0 ile 19 aras�nda ise KALDI.
  printf("\n KALDI");
 else
  printf("\n GECERSIZ NOT!...");
 
 getch();
}
