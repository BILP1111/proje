#include <stdio.h>
#include <conio.h>
#include <string.h>
 
void main(void)
{
      char kelime1[20];
      char kelime2[20];
      int sonuc;
 
      clrscr();
 
      printf("\n Birinci kelimeyi giriniz :");
      gets(kelime1);
      fflush(stdin); //ak���n arabelle�indeki yaz�lmam�� veriyi ilgili ��k�� ayg�t�na yazar.
 
      printf("\n �kinci kelimeyi giriniz :");
      gets(kelime2);
      fflush(stdin);
 
      sonuc = strcmp(kelime1,kelime2);
 
      if( sonuc == 0 )
          printf("\n kelimeler birbirinin aynisi! farkl� kelimeler giriniz");
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
 
      getch();
}
