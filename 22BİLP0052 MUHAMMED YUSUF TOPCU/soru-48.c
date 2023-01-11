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
      //Deðer atama girilir.
 
 
      printf("\n Bir cumle giriniz (Turkce karakter kullanmayiniz):\n" );//Kiþiden bir cümle girilmesi istenir.Türkçe karakter kullanmayýnýz.
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
 
      printf("\n %s cumlesinde %i sesli harf var.",kelime,sayac);//Ekrana yazýlýr.
 
      getch();
}
