#include <stdio.h>
#include <conio.h>
#include <string.h>
 
int main()
{
      char kelime[100];
      int uzunluk = 0;
      int n = 0;
      int sayac = 0;
      char harf;
      //De�er atama girilir.
 
 
      printf("\n Bir cumle giriniz (Turkce karakter kullanmayiniz):\n" );//Ki�iden bir c�mle girilmesi istenir.T�rk�e karakter kullanmay�n�z.
      gets(kelime);
 
      uzunluk = strlen(kelime);
 
      for( n= 0; n < uzunluk ; n++)
      {
          harf = kelime[n];
 
          if( harf >= 'a' && harf <= 'z' )
              harf = harf - 32;
 
          if( harf == 'A' || harf == 'E' || harf == 'I' || harf == 'O' || harf == 'U')//Sesli harfleri bulur.
              sayac++;
      }
 
      printf("\n %s cumlesinde %i sesli harf var.",kelime,sayac);//Ekrana yaz�l�r.
 
      getch();
}
