#include <stdio.h>
#include <conio.h>
#include <string.h>
 
void main(void)  // BOÞ 
{
      char kelime[100];   // 100 KARAKTERE KADAR KELÝME GÝRÝÞÝ ÝSTENÝR
      int uzunluk = 0;
      int n = 0;
      int sayac = 0;
      char aranan;
      char harf;
 
      clrscr();
 
      printf("\n Uzun bir cumle giriniz : " );   // KULLANCIDAN UZUN CÜMLE GÝRMESÝ ÝSTENÝR
      gets(kelime);
      fflush(stdin);
    
      printf("\n Cumle icerisinde aranacak harf : ");   // CÜMLE ÝÇERÝSÝNDEKÝ ARANACAK HRF SORULUR VE ARANAN OLARAK TANITILIR
      scanf("%c",&aranan);
      fflush(stdin);
 
      uzunluk = strlen(kelime);
 
      for( n= 0; n < uzunluk ; n++)   // döngü boyunca kullanýcýnýn girdiði harf aranýr ve bulunduðu zaman kaç kere geçtiði ekrana yansýtýlýr
      {
          harf = kelime[n];
 
          if(  aranan == harf)
              sayac++;
      }
 
      printf("\n \"%s\" cumlesi icinde %c harfi %i tane geciyor.",kelime,aranan,sayac);
 
      getch();
}
