#include <stdio.h>
int main(void)
{
      char kelime1[25]; // char de�i�keni ve int de�i�kenini atad�k
      char kelime2[25];
      int sonuc;
 
 // kullan�c�dan de�er girmesini isteyip girdi�i de�erleri gets ile okuttuk
      printf("\n Birinci kelime :");
      gets(kelime1);
      
      printf("\n Ikinci kelime :");
      gets(kelime2);
 
      sonuc = strcmp(kelime1,kelime2);
 
      if( sonuc == 0 ) // if else komutu ile olumlu olumsuz sonuclar� girdik.
          printf("Kelimeler birbirinin aynisi.");
      else
      if( sonuc > 1 )
    {
          printf("irinci kelime daha uzun...");
          
      }
      else
      if( sonuc < 1)
      {
          printf("Ikinci kelime daha uzun");
          
      }
}
