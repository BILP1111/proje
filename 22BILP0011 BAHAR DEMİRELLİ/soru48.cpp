#include <stdio.h>
#include <conio.h>
 
int main()
{
      int matris[3][3];
      int satir = 0, sutun = 0;
      char simetrik = 'A';
 
 
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

//"matris" adl� 3x3'l�k bir dizi tan�mlan�r.
//"satir" ve "sutun" adl� iki tane de�i�ken tan�mlan�r.
//"simetrik" adl� bir de�i�ken tan�mlan�r ve varsay�lan olarak "A" de�eri verilir.
//Kullan�c�dan matrisin de�erleri al�n�r."simetrik" de�i�keninin de�eri "E" olarak de�i�tirilir. Bu, matrisin simetrik oldu�unu varsayar.
//Bir "for" d�ng�s� ba�lat�l�r ve matrisin sat�rlar� gezilir.
//��teki "for" d�ng�s�, matrisin s�tunlar�n� gezmek i�in ba�lat�l�r.
//E�er sat�r ve s�tun de�erleri e�it de�ilse, matrisin ayn� sat�rdaki ve s�tundaki de�erlerinin e�it olup olmad��� kontrol edilir. E�er de�erler e�it de�ilse, "simetrik" de�i�keninin de�eri "H" olarak de�i�tirilir ve d�ng�lerden ��k�l�r.
//E�er "simetrik" de�i�keninin de�eri "E" ise, matrisin simetrik oldu�u ekrana yazd�r�l�r. De�ilse, matrisin simetrik olmad��� ekrana yazd�r�l�r.
