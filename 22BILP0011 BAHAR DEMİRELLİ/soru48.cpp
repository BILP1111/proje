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

//"matris" adlý 3x3'lük bir dizi tanýmlanýr.
//"satir" ve "sutun" adlý iki tane deðiþken tanýmlanýr.
//"simetrik" adlý bir deðiþken tanýmlanýr ve varsayýlan olarak "A" deðeri verilir.
//Kullanýcýdan matrisin deðerleri alýnýr."simetrik" deðiþkeninin deðeri "E" olarak deðiþtirilir. Bu, matrisin simetrik olduðunu varsayar.
//Bir "for" döngüsü baþlatýlýr ve matrisin satýrlarý gezilir.
//Ýçteki "for" döngüsü, matrisin sütunlarýný gezmek için baþlatýlýr.
//Eðer satýr ve sütun deðerleri eþit deðilse, matrisin ayný satýrdaki ve sütundaki deðerlerinin eþit olup olmadýðý kontrol edilir. Eðer deðerler eþit deðilse, "simetrik" deðiþkeninin deðeri "H" olarak deðiþtirilir ve döngülerden çýkýlýr.
//Eðer "simetrik" deðiþkeninin deðeri "E" ise, matrisin simetrik olduðu ekrana yazdýrýlýr. Deðilse, matrisin simetrik olmadýðý ekrana yazdýrýlýr.
