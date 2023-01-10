#include <stdio.h>
#include <conio.h>
 
void bosluk(int);
 
void main(void)
{
 int cizgi= 0;
 int satir = 0;
 int sayi = 0;
 int s = 40;

 printf("\n Kac cizgi kullanilsin? : ");
 scanf("%i",&cizgi);
 fflush(stdin);
 
 if(cizgi > 20 )
 {
  printf("\n Cizgi sayisi cok fazla .");
  getch();
  return 0;
 }
 
 for(satir =1;satir<=cizgi;satir++)
 {
  printf("\n");
  bosluk(s);
 
  for(sayi= 1; sayi <= satir;sayi++)
   printf("* ");
 
  for(sayi= satir-1; sayi >= 1;sayi--)
   printf("* ");
 
  s = s - 2;
 }
 getch();
}
 
void bosluk(int t)
{
 int sayac = 0;
 for(sayac = 1 ; sayac <= t;sayac++)
 putchar(' ');
}
