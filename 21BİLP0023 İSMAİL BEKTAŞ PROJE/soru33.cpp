#include <stdio.h>
#include <conio.h>
 
main(void)
{
 int sayi = 0;
 int rakam = 0;
 int toplam = 0;
 
 printf("\nBir Sayi Giriniz : ");
 scanf("%i",&sayi);

 while( sayi > 0 )
 {
  rakam = sayi%10;
  toplam = toplam + rakam;
  sayi = sayi/10;
 }
 
 printf("\nSayidaki rakamlarin toplami %i",toplam);
 getch();
}
