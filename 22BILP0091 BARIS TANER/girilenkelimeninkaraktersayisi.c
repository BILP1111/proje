#include <stdio.h>
#include <conio.h>
#include <string.h>
 
void main(void) // Girilen Kelimenin Karakter Sayisini Hesaplayan program
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