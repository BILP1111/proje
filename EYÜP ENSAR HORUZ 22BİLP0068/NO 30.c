#include <stdio.h>
#include <conio.h>
 
void main(void)
{
 void bosluk(int);
 int satir = 0;
 int sayi = 0;    // satir sayi ve c yi programa tatn�tt�k
 int s = 40;
 
 clrscr();
 for(satir =1;satir<10;satir++)  // for d�ng�s� boyunca 1 ve 10 aras�nda say� art���
 {
  printf("\n");
  bosluk(s);   // bo�luk b�rakacak
 
  for(sayi= 1; sayi <= satir;sayi++)
   printf("%i ",sayi);   
 
  for(sayi= satir-1; sayi >= 1;sayi--)
   printf("%i ",sayi);
  s = s -2;
 }
 
 getch();							// d�ng� boyunca say� piramidi olu�ana kadar program arkaplanda d�ng�ye girer. Piramit tamamland���nda i�lem biter
}
 
void bosluk(int t)
{
 int sayac = 0;
 for(sayac = 1 ; sayac <= t;sayac++)
 putchar(' ');
}
