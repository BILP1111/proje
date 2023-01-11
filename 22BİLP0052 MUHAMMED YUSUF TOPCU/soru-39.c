#include <stdio.h>
#include <conio.h>
 
int main()
{
 int sayilar[10] = {4,11,15,36,55,83,42,99,18,10};
 int sayac = 0;
 int sayi = 0;
 char asal;
 //Değer atar.
 
 
 printf("\n Cift Sayilar : ");//Sayılar kümesindeki 10 sayıdaki çift sayıları ekrana yazdırır.
 
 for(sayac = 0;sayac<10;sayac++)
 {
  if (sayilar[sayac]%2 == 0 )
   printf("%i\t",sayilar[sayac]);
 }
 
 printf("\n\n Tek Sayilar : ");//Sayılar kümesindeki 10 sayıdaki tek sayıları ekrana yazdırır.
 
 for(sayac = 0;sayac<10;sayac++)
 {
  if( sayilar[sayac]%2 != 0 )
   printf("%i\t",sayilar[sayac]);
 }
 
 printf("\n\n Asal Sayilar : ");//Sayılar kümesindeki 10 sayıdaki asal sayıları ekrana yazdırır.
 
 for(sayac = 0;sayac<10;sayac++)
 {
  asal = 'E';
 
  for( sayi = 2; sayi < sayilar[sayac] ; sayi++ )
  {
   if( sayilar[sayac]%sayi == 0 )
   {
    asal = 'H';
    break;
   }
  }
 
  if( asal == 'E' )
   printf("%i\t",sayilar[sayac]);
 }
 
 getch();
}
