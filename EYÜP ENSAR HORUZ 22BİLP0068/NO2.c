#include <stdio.h>
#include <conio.h>
 
void main(void)  // boþ 
{
 int sayi = 0;  // sayi tanýtýlýr
 
 clrscr();
 
 printf("\n Bir sayi giriniz: ");  /// kullanýcýdan sayi girmesi istenir ve sayi1 olarak tanýmlanýr
 scanf("%i",&sayi);
 fflush(stdin);
 
 printf("\n Girdiginiz sayi %i'dir",sayi);   // girilen sayý ekrana yansýtýlýr
 
 getch();
}
