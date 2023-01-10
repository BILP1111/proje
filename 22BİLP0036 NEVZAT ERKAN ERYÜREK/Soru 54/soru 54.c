#include <stdio.h>
#include <conio.h>
#include <string.h>
 
void main(void)
{
      char kelime[100];
      int uzunluk = 0;
      int n = 0;
      int sayac = 0;
      char aranan;
      char harf;

      printf("\n Uzun bir cumle giriniz : " );
      gets(kelime);
      fflush(stdin);
 
      printf("\n Cumle icerisinde aranacak harf : ");
      scanf("%c",&aranan);
      fflush(stdin);
 
      uzunluk = strlen(kelime);
 
      for( n= 0; n < uzunluk ; n++)
      {
          harf = kelime[n];
 
          if(  aranan == harf)
              sayac++;
      }
 
      printf("\n \"%s\" cumlesi icinde %c harfi %i tane geciyor.",kelime,aranan,sayac);
 
      getch();
}
