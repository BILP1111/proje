#include <stdio.h>
#include <conio.h>
 
void main(void)  // bo� 
{
 int sayi = 0;  // sayi tan�t�l�r
 
 clrscr();
 
 printf("\n Bir sayi giriniz: ");  /// kullan�c�dan sayi girmesi istenir ve sayi1 olarak tan�mlan�r
 scanf("%i",&sayi);
 fflush(stdin);
 
 printf("\n Girdiginiz sayi %i'dir",sayi);   // girilen say� ekrana yans�t�l�r
 
 getch();
}
