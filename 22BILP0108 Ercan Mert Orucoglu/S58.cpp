#include <stdio.h>
#include <string.h>

// kullanýcý tarafýndan girilen bir metinin harflerinin baþ harflerinin hepsini büyük yapma programý
 
int main(void)
{
      char metin[100];
      char harf;
 
      int uzunluk = 0;
      int n = 0;
 
      printf("Bir metin girin: ");
      gets(metin);
 
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
    printf("Yeni metin: %s",metin);
}
