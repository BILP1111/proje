#include <stdio.h>
#include <string.h>
int main(void)
{
      char kelime[100], harf; // int ve char de�i�kenlerini atad�k.
      int uzunluk = 0, n = 0, sayac = 0;

      printf("Bir cumle giriniz: " ); // kullan�c�dan de�er isteyip gets ile okuttuk.
      gets(kelime);

    uzunluk = strlen(kelime); // strlen ile kelimeyi se�ip for d�ng�s�nde kurdu�umuz hesaplama ile sesli harfleri bulduk
 
    for( n= 0; n < uzunluk ; n++)
      {
          harf = kelime[n];
 
          if( harf >= 'a' && harf <= 'z' )
              harf = harf - 32;
 
          if( harf == 'A' || harf == 'E' || harf == 'I' || harf == 'O' || harf == 'U')
              sayac++;
      }
      printf("\n %s cumlesinde %i sesli harf var.",kelime,sayac); // ekrana yazd�rd�k
}
