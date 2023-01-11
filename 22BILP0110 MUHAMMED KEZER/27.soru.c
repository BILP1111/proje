//Bu kodu internet'ten yararlanarak yapmak zorunda kaldim

/*Bu programda girilen sayýnýn kuvvetini hem normal hemde pow ile alan
program.*/
#include <stdio.h>
#include <conio.h>
#include <math.h>
 
void main(void)
{
 int sayi = 0;
 int us = 0;
 long int sonuc = 1;
 int n = 0;
  
 printf("\n Bir sayinin kuvvetini alma...");
 
 printf("\n Bir sayi giriniz : ");
 scanf("%i",&sayi);
 fflush(stdin);
 
 printf("\n Kacinci kuvveti alinacak : ");
 scanf("%i",&us);
 fflush(stdin);
 
 //for dongusu ile hesaplama yontemi
 for( n = 1; n <= us; n++)
 {
  sonuc = sonuc * sayi;
 }
 
 printf("\n %i^%i \t\t= %li\n\n",sayi,us,sonuc);
 
 //C Fonksiyonu pow(x,y) ile hesaplama yontemi
 printf(" pow(%d,%d) \t= %li",sayi,us);
 
 getch();
}
