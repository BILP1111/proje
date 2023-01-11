#include <stdio.h>
#include <conio.h>
 
void main(void)
{
 float yuzde = 0; 
 clrscr();
 
 printf("\n Bir not girin (0-100): ");  // 0 ile 100 arasýnda girilen notun yuzde olduðunu tanýttýk
 scanf("%f",&yuzde);
 fflush(stdin);
 
 if( yuzde >= 80 && yuzde <= 100 )   // eðer 80 ile 100 arasý ise pekiyi
  printf("\n PEKIYI ");
 else if( yuzde >= 60 && yuzde < 80 )  // deðilse eðer 60 80 arasý ise iyi
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
