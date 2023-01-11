#include <stdio.h>
#include <conio.h>
#include <string.h>
 
 main(void)
{
      char kelime[100];
      int uzunluk = 0;
 
      printf("\n Bir kelime giriniz :");
      gets(kelime);
 
      uzunluk = strlen(kelime);
 
      printf(" \"%s\" kelimesi %i karakterden ibaret.",kelime,uzunluk);
      getch();
}
