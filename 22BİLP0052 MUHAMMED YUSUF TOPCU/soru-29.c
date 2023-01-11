#include <stdio.h>
#include <conio.h>
 
int bosluk();
 
int main()
{
 int cizgi= 0;
 int satir = 0;
 int sayi = 0;
 int s = 40;
 //deðer atanýr.
 
 printf("\n Kac cizgi kullanilsin? : ");//Kiþiden kullanýcak çizgi sayýsý istenir.
 scanf("%i",&cizgi);
 
 if(cizgi > 20 )//En fazla 20 çizgi kullanýlýr.
 {
  printf("\n Cizgi sayisi cok fazla .");//20 den fazla çizgi.
  getch();
  return 0;
 }
 
 for(satir =1;satir<=cizgi;satir++)//satýr sayýsý çizgiye göre artar.
 {
  printf("\n");
  bosluk(s);
 
  for(sayi= 1; sayi <= satir;sayi++)//girilen sayýya göre yýldýz koyulur.
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
