#include <stdio.h>
#include <conio.h>
 
void main(void)
{
      int matris[3][3];
      int satir = 0, sutun = 0;
      char simetrik = 'E';
 
      printf("\n Matrisin degerlerini giriniz : ");
 
      for( satir= 0 ;  satir < 3; satir++ )
      {
            for ( sutun = 0; sutun < 3; sutun++ )
            {
                printf("\n Deger [%i][%i] : ",satir+1,sutun+1);
                scanf("%i",&matris[satir][sutun]);
                fflush(stdin);
            }
      }
 
 
      for( satir= 0 ;  satir < 3; satir++ )
      {
            for ( sutun = 0;sutun < 3;sutun++ )
            {
                  if( satir != sutun )
                {
                    if( matris[satir][sutun] != matris[sutun][satir] )
                    {
                        simetrik = 'H';
                        break;
                    }
                }
            }
      }
 
 
      if(simetrik == 'E' )
          printf("\n Matris Simetriktir.");
      else
          printf("\n Matris Simetrik Degildir.");
 
      getch();
}
