#include <stdio.h>
#include <conio.h>
 
int main()
{
 int baslangic = 0;
 int bitis = 0;
 int sayi = 0;
 int n = 0;
 char asal = 'E';
 //Ýstenilen deðerler atanýr.
 
 printf("\n Verilen araliktaki asal sayilar...");//Girilen sayýnýn arasýndaký asal sayýlarý bulan program.
 printf("\n ==================================");
 
 printf("\n Baslangic : ");//Baþlangiç sayýsýný giriniz.
 scanf("%i",&baslangic);
 
 printf("\n Bitis : ");//Bitiþ sayýsýný giriniz.
 scanf("%i",&bitis);
 
 printf("\n\n %i ve %i arasindaki asal sayilar : ",baslangic,bitis);//Girilen sayýlar arasýndaký asal sayýlar
 printf("\n ===================================\n");
 
 for( sayi = baslangic ; sayi <= bitis ; sayi++ )//for döngüsü ile asal sayýlarý bulan program.
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
