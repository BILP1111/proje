#include <stdio.h>
#include <conio.h>
#include <string.h>
 
void main(void)
{
      char kelime1[25]; //25 karakterlik veri t�r� atad�k
      char kelime2[25];
      int sonuc;         
 
      clrscr();   
 
      printf("\n Birinci kelimeyi giriniz :"); 
      gets(kelime1); 
      fflush(stdin);
 
      printf("\n Ikinci kelimeyi giriniz :");
      gets(kelime2);
      fflush(stdin);
 
      sonuc = strcmp(kelime1,kelime2); // strcmp ,Str1 parametresi ile g�sterilen karakter dizisini str2 parametresi ile g�sterilen karakter dizisi ile kar��la�t�r�r
 
      if( sonuc == 0 )
          printf("\n kelimeler birbirinin aynisi l�tfen farkl� say� giriniz"); // e�er kelimeler birbiri ile ayn� ise kelimeler birbiri ile ayn� uyar�s� verilir.
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
