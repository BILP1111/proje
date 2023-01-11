#include <stdio.h>
#include <conio.h>
#include <string.h>
 
void main(void)
{
      char kelime1[25]; //25 karakterlik veri türü atadýk
      char kelime2[25];
      int sonuc;         
 
      clrscr();   
 
      printf("\n Birinci kelimeyi giriniz :"); 
      gets(kelime1); 
      fflush(stdin);
 
      printf("\n Ikinci kelimeyi giriniz :");
      gets(kelime2);
      fflush(stdin);
 
      sonuc = strcmp(kelime1,kelime2); // strcmp ,Str1 parametresi ile gösterilen karakter dizisini str2 parametresi ile gösterilen karakter dizisi ile karþýlaþtýrýr
 
      if( sonuc == 0 )
          printf("\n kelimeler birbirinin aynisi lütfen farklý sayý giriniz"); // eðer kelimeler birbiri ile ayný ise kelimeler birbiri ile ayný uyarýsý verilir.
      else
      if( sonuc > 1 )
    {
          printf("\n Birinci kelime daha uzundur");
          printf("\n %s kelimesi %s kelimesinden daha uzundur",kelime1,kelime2);
      }
      else
      if( sonuc < 1)
      {
          printf("\n Ikinci kelime daha uzundur");
          printf("\n %s kelimesi %s kelimesinden daha uzundur",kelime2,kelime1);
      }
 
}
