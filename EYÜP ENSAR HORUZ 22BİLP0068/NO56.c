#include <stdio.h>
#include <conio.h>
#include <string.h>
 
void main(void) //bo� 
{
      char metin[100]; 
      char temp;
 
      int uzunluk = 0;
      int m = 0,n = 0; 
 
      clrscr();
 
      printf("\n Bir metin giriniz : " );
      gets(metin);
      fflush(stdin);
 
      uzunluk = strlen(metin); 
 
      for( m = 0 ; m < uzunluk - 1; m++ )
      {
            for( n = m+1 ; n < uzunluk; n++ )    //d�ng�ler ile metnin alfabetik s�ras�na g�re d�nmesini sa�lad�k
          {
              if( metin[m] > metin[n] )
              {
                  temp = metin[m];
                  metin[m] = metin[n];
                  metin[n] = temp;
              }
          }
      }
 
      printf("\n Harflerinin siralamasi %s",metin);  // harf s�ralamas� ekrana yazd�r�l�r
      getch();
}
