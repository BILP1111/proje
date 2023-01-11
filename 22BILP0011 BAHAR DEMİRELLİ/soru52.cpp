#include <stdio.h>
#include <conio.h>
#include <string.h>
 
int main()
{
      char kelime[100];
      int uzunluk = 0;
 
      printf("\n Bir kelime giriniz :");
      gets(kelime);
      fflush(stdin);
 
      uzunluk = strlen(kelime);
 
      printf(" \"%s\" kelimesi %i karakterden ibaret.",kelime,uzunluk);
      getch();
}