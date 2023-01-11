// Girilen matrisin simetrik olup olmadýðýný bulan program.

#include <stdio.h> // KÜTÜPHANE TANIMLAMA
#include <conio.h> // KÜTÜPHANE TANIMLAMA
 
int main()
{
      int matris[3][3]; // SAYISAL DEÐÝÞKEN OLARAK matris DEÐERÝ TANIMLIYORUZ VE 3 KRÝTERLERÝNÝ BELÝRLÝYORUZ
      int satir = 0, sutun = 0; // SAYISAL DEÐÝÞKEN OLARAK satir ve sutun DEÐERÝ TANIMLIYORUZ 0 A EÞÝTLÝYORUZ
      char simetrik = 'E'; // KARAKTER DEÐÝÞKENÝ OLARAK simetrik DEÐERÝNÝ E KRÝTERÝ BELÝRLÝYORUZ
 
      printf("\n Matrisin degerlerini giriniz : "); // KULLANICIDAN DEÐER ALIYORUZ
 
      for( satir= 0 ;  satir < 3; satir++ ) // satir DEÐERÝNÝ 0 A EÞÝTLÝYORUZ satir DEÐERÝ 3 OLANA KADAR satir DEÐERÝNÝ 1 ARTTIRIYORUZ
      {
            for ( sutun = 0; sutun < 3; sutun++ ) // sutun DEÐERÝNÝ 0 A EÞÝTLÝYORUZ sutun DEÐERÝ 3 OLANA KADAR sutun DEÐERÝNÝ 1 ARTTIRIYORUZ
            {
                printf("\n Deger [%d][%d] : ",satir+1,sutun+1); // satir DEÐERÝNE VE sutun DEÐERÝNE 1 ARTTIRIYORUZ EKRANDA GÖSTERÝYORUZ
                scanf("%d",&matris[satir][sutun]); // DEÐERLERÝ HAFIZADA TUTUYORUZ
            }
      }
 
 
      for( satir= 0 ;  satir < 3; satir++ ) // satir DEÐERÝNÝ 0 A EÞÝTLÝYORUZ satir DEÐERÝ 3 OLANA KADAR satir DEÐERÝNE 1 ARTTIRIYORUZ
      {
            for ( sutun = 0;sutun < 3;sutun++ ) // sutun DEÐERÝNÝ 0 A EÞÝTLÝYORUZ sutun DEÐERÝ 3 OLANA KADAR sutun DEÐERÝNE 1 ARTTIRIYORUZ
            {
                  if( satir != sutun ) // EÐER satir DEÐERÝ sutun DEÐERÝNE EÞÝT DEÐÝLSE
                {
                    if( matris[satir][sutun] != matris[sutun][satir] ) // EÐER matris[satir][sutun] DEÐERÝ matris[sutun][satir] DEÐERÝNE EÞÝT DEÐÝLSE
                    {
                        simetrik = 'H'; // simetrik DEÐERÝNÝ H OLARAK TANIMLIYORUZ
                        break;
                    }
                }
            }
      }
 
 
      if(simetrik == 'E' ) // EÐER simetrik DEÐERÝ E ÝSE
          printf("\n Matris Simetriktir."); // EKRANA YAZDIRMA
      else // DEÐÝLSE
          printf("\n Matris Simetrik Degildir."); // EKRANA YAZDIRMA
 
    return 0;
}
