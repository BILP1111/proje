#include <stdio.h>
#include <string.h>

 // �stenilen bir c�mle girilip sonras�nda aranmak istenen karakter se�ilip, se�ilen karakterden ka� tane oldu�unu bulan program
int main(void)
{
      char kelime[100];
      int uzunluk = 0,n = 0, sayac = 0, aranan, harf;
      
      printf("Uzun bir cumle girin: " );
      gets(kelime);
      
      printf("Cumle icerisinde aranacak harf: ");
      scanf("%c",&aranan);
      uzunluk = strlen(kelime);
 
      for( n= 0; n < uzunluk ; n++)
      {
          harf = kelime[n];
 
          if(  aranan == harf)
              sayac++;
      }
      printf("\n \"%s\" cumlesi icinde %c harfi %i tane geciyor",kelime,aranan,sayac);
}
