#include <stdio.h>
#include <conio.h>
#include <string.h>
 
void main(void)
{
      char metin[100];
      char harf;
 
      int uzunluk = 0;
      int n = 0;

      printf("\n Bir metin giriniz : ");
      gets(metin);
      fflush(stdin);
 
      if( metin[0] >= 'a' && metin[0] <= 'z' )
          metin[0] = metin[0] - 32;
 
 
      while( metin[n] != '\0' )
      {
          harf = metin[n];
 
          if( harf == ' '  )
          {
                n++;
                harf = metin[n];
 
              if( harf >= 'a' && harf <= 'z' )
              {
                    harf = harf - 32;
                    metin[n] = harf;
              }
          }
            n++;
      }
 
      printf("\n Yeni Metin :  %s",metin);
 
      getch();
}
