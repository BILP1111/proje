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
 //De�er atama i�lemi yap�l�r.
 
 printf("\n Bir sayinin kuvvetini alma...");//Girilen say�n�n �ss�n� alma.
 printf("\n ==========================");
 
 printf("\n Bir sayi giriniz : ");//Ki�iden say� girilmesi istenir.
 scanf("%i",&sayi);
 
 printf("\n Kacinci kuvveti alinacak : ");//Girilen say�n�n ka��n�� kuvveti al�nmas� sorulur.
 scanf("%i",&us);
 
 for( n = 1; n <= us; n++)//for d�ng�s� ile �s alma hesaplan�r.
 {
  sonuc = sonuc * sayi;//��lem
 }
 
 printf("\n %i^%i \t\t= %li\n\n",sayi,us,sonuc);//��lem Sonucu
 
 printf(" pow(%d,%d) \t= %li",sayi,us,(pow(sayi,us)));//Pow sonucu
 
 getch();
}
