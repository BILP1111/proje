#include <stdio.h>
#include <conio.h>
#include <string.h>
 
void main(void)  // BO� 
{
      char kelime[100];   // 100 KARAKTERE KADAR KEL�ME G�R��� �STEN�R
      int uzunluk = 0;
      int n = 0;
      int sayac = 0;
      char aranan;
      char harf;
 
      clrscr();
 
      printf("\n Uzun bir cumle giriniz : " );   // KULLANCIDAN UZUN C�MLE G�RMES� �STEN�R
      gets(kelime);
      fflush(stdin);
    
      printf("\n Cumle icerisinde aranacak harf : ");   // C�MLE ��ER�S�NDEK� ARANACAK HRF SORULUR VE ARANAN OLARAK TANITILIR
      scanf("%c",&aranan);
      fflush(stdin);
 
      uzunluk = strlen(kelime);
 
      for( n= 0; n < uzunluk ; n++)   // d�ng� boyunca kullan�c�n�n girdi�i harf aran�r ve bulundu�u zaman ka� kere ge�ti�i ekrana yans�t�l�r
      {
          harf = kelime[n];
 
          if(  aranan == harf)
              sayac++;
      }
 
      printf("\n \"%s\" cumlesi icinde %c harfi %i tane geciyor.",kelime,aranan,sayac);
 
      getch();
}
