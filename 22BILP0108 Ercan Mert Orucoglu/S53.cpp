#include <stdio.h>
#include <string.h>
int main(void)
{
      char kelime[100], harf; // int ve char deðiþkenlerini atadýk.
      int uzunluk = 0, n = 0, sayac = 0;

      printf("Bir cumle giriniz: " ); // kullanýcýdan deðer isteyip gets ile okuttuk.
      gets(kelime);

    uzunluk = strlen(kelime); // strlen ile kelimeyi seçip for döngüsünde kurduðumuz hesaplama ile sesli harfleri bulduk
 
    for( n= 0; n < uzunluk ; n++)
      {
          harf = kelime[n];
 
          if( harf >= 'a' && harf <= 'z' )
              harf = harf - 32;
 
          if( harf == 'A' || harf == 'E' || harf == 'I' || harf == 'O' || harf == 'U')
              sayac++;
      }
      printf("\n %s cumlesinde %i sesli harf var.",kelime,sayac); // ekrana yazdýrdýk
}
