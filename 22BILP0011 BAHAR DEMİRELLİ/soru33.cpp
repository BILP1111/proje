#include <stdio.h>
#include <conio.h>
 
int main()
{
 int sayi = 0;
 int rakam = 0;
 int toplam = 0;

 
 printf("\nBir Sayi Giriniz : ");
 scanf("%i",&sayi);
 fflush(stdin);
 
 while( sayi > 0 )  //while d�ng�s�nde parantez i�indeki ko�ul sa�land��� s�rece d�ng� devam eder!
 {
  rakam = sayi%10;
  toplam = toplam + rakam;
  sayi = sayi/10;
 }
 
 printf("\nSayidaki rakamlarin toplami %i",toplam);
 getch();
}
