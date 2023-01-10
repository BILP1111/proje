#include <stdio.h>
#include <conio.h>
 
void main(void)
{
      int matris[4][4];
      int transpose[4][4];
      int satir = 0,sutun = 0;

      printf("\n 4*4'luk matrisin degerlerini giriniz ");
 
      for( satir = 0 ;  satir < 4; satir++ )
      {
            for ( sutun = 0;sutun< 4;sutun++)
            {
                printf("\nMatrisin [%i][%i] elemaný : ",satir+1,sutun+1);
                scanf("%i",&matris[satir][sutun]);
                fflush(stdin);
 
                transpose[sutun][satir] = matris[satir][sutun];
            }
      }
 
      printf("\nMatris ve Transposesi\n");
 
      for( satir= 0 ;  satir < 4; satir++ )
      {
            for ( sutun = 0;sutun< 4;sutun++)
            {
                printf("%i ",matris[satir][sutun]);
            }
 
            printf("\t\t\t");
 
            for ( sutun = 0;sutun < 4;sutun++)
            {
                printf("%i ",transpose[satir][sutun]);
            }
 
            printf("\n");
      }
 
      getch();
}
