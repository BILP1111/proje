#include <stdio.h>
#include <conio.h>
#include <string.h>
 
void main(void)
{
      char kelime[100];  // 100 karaktere kadaar kelime giri�i yap�l�r
      int uzunluk = 0;   
 
      clrscr();
 
      printf("\n Bir kelime giriniz :");  // kullan�c�dan kelime girmesi isternir ve girilen kelime programa , kelime olarak tan�t�l�r 
      gets(kelime);
      fflush(stdin);
 
      uzunluk = strlen(kelime);  // kelime uzunlu�u hesaplan�r
 
      printf(" \"%s\" kelimesi %i karakterterir.",kelime,uzunluk);// karakter say�s� ekrana yazr�l�l�r
      getch();
}
