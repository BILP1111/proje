#include <stdio.h>
#include <conio.h>
#include <string.h>
 
struct sporcu
{
      char ad[30];
      int  yas;
      char ulke[15];
      int  yaris;
};
 
void main(void)
{
      struct sporcu kisi[3];
      struct sporcu gecici;
 
      int sayac = 3;
      int n = 0;
      int u = 0, l = 0;

      for( n = 0; n < sayac; n++)
      {
            printf("\n %2i. Sporcu",n+1);
            printf("\n =========");
            printf("\n Adi       : "); gets(kisi[n].ad); fflush(stdin);
            printf("\n Yasi    : "); scanf("%i",&kisi[n].yas); fflush(stdin);
            printf("\n Ulkesi  : "); gets(kisi[n].ulke); fflush(stdin);
            printf("\n Yaris   : "); scanf("%i",&kisi[n].yaris); fflush(stdin);
      }
 
      for( u = 0 ; u < sayac-1; u++ )
      {
            for( l = u + 1; l < sayac; l++)
            {
                  if( stricmp( kisi[u].ulke,kisi[l].ulke ) > 0 )
                  {
                        gecici = kisi[u];
                        kisi[u] = kisi[l];
                        kisi[l] = gecici;
                  }
            }
      }
 
      printf("\n No \t Adi \t Yasi \t Ulkesi \t Yaris");
      printf("\n =============================================");
 
      for( n = 0 ; n < sayac; n++ )
      {
            printf("\n %i. \t %s \t %i \t %s \t %i ",
                        n+1,kisi[n].ad,kisi[n].yas,kisi[n].ulke,kisi[n].yaris);
      }
 
      getch();
}
