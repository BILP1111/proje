#include <stdio.h>
#include <conio.h>
 
int bosluk();
 
int main()
{
 int cizgi= 0;
 int satir = 0;
 int sayi = 0;
 int s = 40;
 //de�er atan�r.
 
 printf("\n Kac cizgi kullanilsin? : ");//Ki�iden kullan�cak �izgi say�s� istenir.
 scanf("%i",&cizgi);
 
 if(cizgi > 20 )//En fazla 20 �izgi kullan�l�r.
 {
  printf("\n Cizgi sayisi cok fazla .");//20 den fazla �izgi.
  getch();
  return 0;
 }
 
 for(satir =1;satir<=cizgi;satir++)//sat�r say�s� �izgiye g�re artar.
 {
  printf("\n");
  bosluk(s);
 
  for(sayi= 1; sayi <= satir;sayi++)//girilen say�ya g�re y�ld�z koyulur.
   printf("* ");
 
  for(sayi= satir-1; sayi >= 1;sayi--)
   printf("* ");
 
  s = s - 2;
 }
 getch();
}
 
int bosluk(int t)
{
 int sayac = 0;
 for(sayac = 1 ; sayac<=t;sayac++)
 
 putchar(' ');
}
