#include <stdio.h>
#include <conio.h>
#include <string.h>
 
int main()
{
      char kelime[100];
      int uzunluk = 0;
 //Deðer atama iþlemi yapýlr.
 
      printf("\n Bir kelime giriniz :");//Girdiðiniz kelimenin kaç kelime kullanýldýðýný bulan C programý
      gets(kelime);
 
      uzunluk = strlen(kelime);
 
      printf(" \"%s\" kelimesi %i karakterden olusmaktadir.",kelime,uzunluk);
      getch();
}
