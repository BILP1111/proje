#include <stdio.h>
#include <conio.h>
#include <string.h>
 
int main()
{
      char kelime1[25];
      char kelime2[25];
      int sonuc;
 
      printf("\n Birinci kelime :");
      gets(kelime1);
      fflush(stdin);
 
      printf("\n Ikinci kelime :");
      gets(kelime2);
      fflush(stdin);
 
      sonuc = strcmp(kelime1,kelime2);
 
      if( sonuc == 0 )
          printf("\n kelimeler birbirinin aynisi..");
      else
      if( sonuc > 1 )
    {
          printf("\n Birinci kelime daha uzun...");
          printf("\n %s kelimesi %s kelimesinden daha uzun...",kelime1,kelime2);
      }
      else
      if( sonuc < 1)
      {
          printf("\n Ikinci kelime daha uzun...");
          printf("\n %s kelimesi %s kelimesinden daha uzun...",kelime2,kelime1);
      }
 
      getch();
}

//iki koþul kullanarak istenilen iki koþulu saðladým.
