#include <stdio.h>
#include <conio.h>
#include <string.h>
 
main()
{
      char metin[100];
      char ters[100];
 
      int uzunluk = 0;
      int n = 0;

      printf("\n Bir metin giriniz : " );
      gets(metin);
      fflush(stdin);
 
      uzunluk = strlen(metin);
 
      for( n = 0 ; n < uzunluk; n++ )
      {
          ters[n] = metin[uzunluk-1-n];
      }
 
      ters[n] = '\0';
 
      printf("\n Girilen Metin : %s",metin);
      printf("\n Metnin Tersi  : %s",ters);
      getch();
}
