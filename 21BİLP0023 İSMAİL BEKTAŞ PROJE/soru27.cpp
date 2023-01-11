#include <stdio.h>
#include <conio.h>
#include <math.h>
 
 main(void)
{
 int sayi = 0;
 int us = 0;
 long int sonuc = 1;
 int n = 0;
 
 printf("\n Bir sayinin kuvvetini alma...");
 printf("\n ==========================");
 
 printf("\n Bir sayi giriniz : ");
 scanf("%i",&sayi);

 
 printf("\n Kacinci kuvveti alinacak : ");
 scanf("%i",&us);
 
 //for dongusu ile hesaplama yontemi
 for( n = 1; n <= us; n++)
 {
  sonuc = sonuc * sayi;
 }
 
 printf("\n %i^%i \t\t= %li\n\n",sayi,us,sonuc);
 
 //C Fonksiyonu pow(x,y) ile hesaplama yontemi
 printf(" pow(%d,%d) \t= %li",sayi,us,int(pow(sayi,us)));
 
 getch();
}
