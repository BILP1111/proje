#include <stdio.h>
#include <conio.h>
#include <string.h>
 
int main()
{
      char kelime[100];
      int uzunluk = 0;
 //De�er atama i�lemi yap�lr.
 
      printf("\n Bir kelime giriniz :");//Girdi�iniz kelimenin ka� kelime kullan�ld���n� bulan C program�
      gets(kelime);
 
      uzunluk = strlen(kelime);
 
      printf(" \"%s\" kelimesi %i karakterden olusmaktadir.",kelime,uzunluk);
      getch();
}
