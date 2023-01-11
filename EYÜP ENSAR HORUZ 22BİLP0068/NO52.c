#include <stdio.h>
#include <conio.h>
#include <string.h>
 
void main(void)
{
      char kelime[100];  // 100 karaktere kadaar kelime giriþi yapýlýr
      int uzunluk = 0;   
 
      clrscr();
 
      printf("\n Bir kelime giriniz :");  // kullanýcýdan kelime girmesi isternir ve girilen kelime programa , kelime olarak tanýtýlýr 
      gets(kelime);
      fflush(stdin);
 
      uzunluk = strlen(kelime);  // kelime uzunluðu hesaplanýr
 
      printf(" \"%s\" kelimesi %i karakterterir.",kelime,uzunluk);// karakter sayýsý ekrana yazrýlýlýr
      getch();
}
