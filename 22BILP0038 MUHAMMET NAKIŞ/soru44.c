// 3*3 lük bir matrisin deðerlerini kullanýcýya soran ve matrisi ekrana yazdýran program.

#include <stdio.h> // KÜTÜPHANE TANIMLAMA
#include <conio.h> // KÜTÜPHANE TANIMLAMA
 
int main()
{
 int matris[3][3]; // SAYISAL DEÐÝÞKEN OLARAK DEÐER TANIMLAMA VE 3 KRÝTERÝ VERME
 int satir = 0,sutun = 0; // SAYISAL DEÐÝÞKEN OLARAK satir ve sutun DEÐERLERÝ TANIMLAMA VE 0 A EÞÝTLEME
 
 for( satir=0 ; satir<3; satir++) // DÖNGÜ AÇIP satir DEÐERÝNÝ 0 DAN BAÞLAYARAK 3 OLANA DEK 1 ARTTIRMA
 {
  for( sutun=0; sutun<3; sutun++ ) // DÖNGÜ AÇIP sutun DEÐERÝNÝ 0 DAN BAÞLAYARAK 3 OLANA DEK 1 ARTTIRMA
  {
   printf("Deger [%d][%d] : ",satir+1,sutun+1); // satir DEÐERÝNE VE sutun DEÐERÝNE 1 ARTTIRIP EKRANDA GÖSTERME
   scanf("%d",&matris[satir][sutun]); // satir ve sutun DEÐERLERÝNÝ matris DEÐERÝ ÝÇERÝSÝNDE EKRANDA GÖSTERME
  }
 }
 
 printf("\n Matris: \n"); // EKRANDA GÖSTERME
 
 for( satir=0 ; satir<3; satir++) // DÖNGÜ AÇIP satir DEÐERÝNÝ 0 DAN BAÞLAYARAK 3 OLANA DEK 1 ARTTIRMA
 {
  printf("\n"); // 1 SATIR ALTA ALMA
 
  for( sutun=0; sutun<3; sutun++ ) // DÖNGÜ AÇIP sutun DEÐERÝNÝ 0 DAN BAÞLAYARAK 3 OLANA DEK 1 ARTTIRMA
  {
   printf("\t%d",matris[satir][sutun]); // satir ve sutun DEÐERLERÝNÝ matris DEÐERÝ ÝÇERÝSÝNDE EKRANDA GÖSTERME
  }
 }
 
 return 0;
}
