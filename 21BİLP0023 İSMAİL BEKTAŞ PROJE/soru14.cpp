#include <stdio.h>
#include <conio.h>
 
 main(void)
{
 float yuzde = 0;

 printf("\n Bir not girin (0-100): ");
 scanf("%f",&yuzde);
 
 if( yuzde >= 80 && yuzde <= 100 )
  printf("\n PEKIYI ");
 else if( yuzde >= 60 && yuzde < 80 )
  printf("\n IYI ");
 else if( yuzde >= 40 && yuzde < 60 )
  printf("\n ORTA");
 else if( yuzde >= 20 && yuzde < 40 )
  printf("\n GECER ");
 else if( yuzde >= 0 && yuzde < 20 )
  printf("\n KALDI");
 else
  printf("\n GECERSIZ NOT!...");
 
 getch();
}
