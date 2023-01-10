#include <stdio.h>
#include <conio.h>
#include <string.h>
 
void main(void)
{
      char metin[250];
      int n = 0;
 
      printf("\n Bir metin giriniz (Max 250 karakter) :\n");
      gets(metin);
      fflush(stdin);
      printf ("\n Kucuk : %s",metin);
      while( metin[n] != '\0' )
      {
        if( metin[n] >= 'a' && metin[n] <= 'z' && metin[n] != 'i')
            metin[n] = metin[n] - 32;
        else if ( metin[n] == 'ü' )
            metin[n] = 'Ü';
        else if ( metin[n] == 'ð' )
            metin[n] = 'Ð';
        else if ( metin[n] == 'i' )
            metin[n] = 'Ý';
        else if ( metin[n] == 'ý' )
            metin[n] = 'I';
        else if ( metin[n] == 'þ' )
            metin[n] = 'Þ';
        else if ( metin[n] == 'ç' )
            metin[n] = 'Ç';
        else if ( metin[n] == 'ö' )
            metin[n] = 'Ö';
        n++;
      }
 
      printf("\n Buyuk : %s",metin);
      getch();
}
