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

//Burada, bir döngü içinde kelimenin tüm harfleri taranýyor. Döngüdeki her harf için, harf "a" ile "z" arasýnda mý diye kontrol ediliyor. Eðer harf "a" ile "z" arasýnda ise, harf deðiþkenine 32 çýkarýlarak büyük harfe çevriliyor. Daha sonra, harf "A", "E", "I", "O" veya "U" ile eþleþiyorsa, sayaç deðiþkenine 1 ekleniyor. Bu sayaç deðiþkeni, kelimenin tüm harfleri tarandýktan sonra kelime içinde kaç tane "A", "E", "I", "O" veya "U" harfi olduðunu gösterir.
