#include <stdio.h>
#include <conio.h>
 
void main(void) // Sayi Piramidi olusturan program 
{
 void bosluk(int); // bosluk birakmak icin function
 int satir = 0;
 int sayi = 0;
 int s = 40;
 
 for(satir =1;satir<10;satir++) // satir esittir bir satir kucukse 102dan ++
 {
  printf("\n");
  bosluk(s);
 
  for(sayi= 1; sayi <= satir;sayi++)
   printf("%i ",sayi);
 
  for(sayi= satir-1; sayi >= 1;sayi--)
   printf("%i ",sayi);
  s = s -2;
 }
 
 getch();
}
 
void bosluk(int t)
{
 int sayac = 0;
 for(sayac = 1 ; sayac <= t;sayac++)
 putchar(' ');
}