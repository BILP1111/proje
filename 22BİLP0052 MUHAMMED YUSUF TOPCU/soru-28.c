#include <stdio.h>
#include <conio.h>
 
int main()
{
 int baslangic = 0;
 int bitis = 0;
 int sayi = 0;
 int n = 0;
 char asal = 'E';
 //�stenilen de�erler atan�r.
 
 printf("\n Verilen araliktaki asal sayilar...");//Girilen say�n�n aras�ndak� asal say�lar� bulan program.
 printf("\n ==================================");
 
 printf("\n Baslangic : ");//Ba�langi� say�s�n� giriniz.
 scanf("%i",&baslangic);
 
 printf("\n Bitis : ");//Biti� say�s�n� giriniz.
 scanf("%i",&bitis);
 
 printf("\n\n %i ve %i arasindaki asal sayilar : ",baslangic,bitis);//Girilen say�lar aras�ndak� asal say�lar
 printf("\n ===================================\n");
 
 for( sayi = baslangic ; sayi <= bitis ; sayi++ )//for d�ng�s� ile asal say�lar� bulan program.
 {
  asal = 'E';
  for( n = 2 ; n < sayi ; n++ )
  {
   if( sayi % n == 0 )
    asal = 'H' ;
  }
  if( asal == 'E' )
   printf("\t%i",sayi);
 }
 
 getch();
}
