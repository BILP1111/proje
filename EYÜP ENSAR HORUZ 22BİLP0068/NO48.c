#include <stdio.h>
#include <conio.h>
 
void main(void)
{
      int matris[3][3];
      int satir = 0, sutun = 0;   // matris satir ve simetrik  kelimeleri programa tanýtýlýr.
      char simetrik = 'E';
 
      clrscr(); 
 
      printf("\n Matrisin degerlerini giriniz : ");  // matrisin deðerleri girilir
 
      for( satir= 0 ;  satir < 3; satir++ )    // satir 0 dan baþlayýp 3 e kadar döner
      {
            for ( sutun = 0; sutun < 3; sutun++ )
            {
                printf("\n Deger [%i][%i] : ",satir+1,sutun+1);   // deðer ekrana programlandýðý þekilde yansýr
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
          printf("\n Matris Simetriktir.");   // verilen deðelere uyduðu zaman simeytik uymadýðý zaman olmadýðý programa tanýtýlýr
      else
          printf("\n Matris Simetrik Degildir.");
 
      getch();
}
