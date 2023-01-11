#include <stdio.h>
#include <conio.h>
 
void main(void)
{
 void bosluk(int);
 int satir = 0;
 int sayi = 0;    // satir sayi ve c yi programa tatnýttýk
 int s = 40;
 
 clrscr();
 for(satir =1;satir<10;satir++)  // for döngüsü boyunca 1 ve 10 arasýnda sayý artýþý
 {
  printf("\n");
  bosluk(s);   // boþluk býrakacak
 
  for(sayi= 1; sayi <= satir;sayi++)
   printf("%i ",sayi);   
 
  for(sayi= satir-1; sayi >= 1;sayi--)
   printf("%i ",sayi);
  s = s -2;
 }
 
 getch();							// döngü boyunca sayý piramidi oluþana kadar program arkaplanda döngðye girer. Piramit tamamlandýðýnda iþlem biter
}
 
void bosluk(int t)
{
 int sayac = 0;
 for(sayac = 1 ; sayac <= t;sayac++)
 putchar(' ');
}
