//EN son bak.
#include <stdio.h>
#include <conio.h>
#include <math.h>
 
int main()
{
 int sayi = 0;
 int us = 0;
 long int sonuc = 1;
 int n = 0;
 //Deðer atama iþlemi yapýlýr.
 
 printf("\n Bir sayinin kuvvetini alma...");//Girilen sayýnýn üssünü alma.
 printf("\n ==========================");
 
 printf("\n Bir sayi giriniz : ");//Kiþiden sayý girilmesi istenir.
 scanf("%i",&sayi);
 
 printf("\n Kacinci kuvveti alinacak : ");//Girilen sayýnýn kaçýnçý kuvveti alýnmasý sorulur.
 scanf("%i",&us);
 
 for( n = 1; n <= us; n++)//for döngüsü ile üs alma hesaplanýr.
 {
  sonuc = sonuc * sayi;//Ýþlem
 }
 
 printf("\n %i^%i \t\t= %li\n\n",sayi,us,sonuc);//Ýþlem Sonucu
 
 printf(" pow(%d,%d) \t= %li",sayi,us,(pow(sayi,us)));//Pow sonucu
 
 getch();
}
