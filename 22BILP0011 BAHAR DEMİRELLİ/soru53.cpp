#include <stdio.h>
#include <conio.h>
#include <string.h>
 
int main()
{
      char kelime[100];
      int uzunluk = 0;
      int i = 0;
      int sayac = 0;
      char harf;

 
      printf("\n Bir cumle giriniz :\n" );
      gets(kelime);
      fflush(stdin);
 
      uzunluk = strlen(kelime);
 
      for( i= 0; i < uzunluk ; i++)
      {
          harf = kelime[i];
 
          if( harf >= 'a' && harf <= 'z' )
              harf = harf - 32;
 
          if( harf == 'A' || harf == 'E' || harf == 'I' || harf == 'O' || harf == 'U')
              sayac++;
      }
 
      printf("\n %s cumlesinde %i sesli harf var.",kelime,sayac);
 
      getch();
}

//Burada, bir d�ng� i�inde kelimenin t�m harfleri taran�yor. D�ng�deki her harf i�in, harf "a" ile "z" aras�nda m� diye kontrol ediliyor. E�er harf "a" ile "z" aras�nda ise, harf de�i�kenine 32 ��kar�larak b�y�k harfe �evriliyor. Daha sonra, harf "A", "E", "I", "O" veya "U" ile e�le�iyorsa, saya� de�i�kenine 1 ekleniyor. Bu saya� de�i�keni, kelimenin t�m harfleri tarand�ktan sonra kelime i�inde ka� tane "A", "E", "I", "O" veya "U" harfi oldu�unu g�sterir.
