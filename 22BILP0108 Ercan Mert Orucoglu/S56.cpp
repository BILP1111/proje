#include <stdio.h>
#include <string.h>
 
int main(void)
{
      char metin[100]; //char ve int de�erleri atad�k
      char temp;
 
      int uzunluk = 0;
      int m = 0,n = 0;
 
     
      printf("\n Bir metin giriniz : " ); // kullan�c�dan bir de�er girmesini isteyip gets ile okuttuk.
      gets(metin);
     
 
      uzunluk = strlen(metin);
 
      for( m = 0 ; m < uzunluk - 1; m++ ) // for-if ile harfleri s�ralamaya koyduk
      {
            for( n = m+1 ; n < uzunluk; n++ )
          {
              if( metin[m] > metin[n] )
              {
                  temp = metin[m];
                  metin[m] = metin[n];
                  metin[n] = temp;
              }
          }
      }
      printf("\n Harflerinin siralamasi %s",metin); // printf ile sonucu ekrana yazd�rd�k.
}
