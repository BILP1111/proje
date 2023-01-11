#include <stdio.h>
#include <conio.h>
 
int main()
{
 int sayi = 0;
 int n = 0;
 //Deðer atar.
 
 printf("\n Carpim Tablosu...");//Girilen sayýnýn 1 e kadar çarpým tablosu çýkaran program
 printf("\n =================");
 
 printf("\n Bir sayi girin : ");//Kiþiden sayý ister.
 scanf("%i",&sayi);
 
 printf("\n\n %i sayisi\n\n",sayi);//Girilen sayýyý ekrana yazar.
 
 for(n=1;n<=10;n++)//For döngüsü ile 10 a kadar olan sayýlarý ekrana yazar.
 {
  printf("\n %i * %i = %i",sayi,n,(sayi*n) );//Girilen sayýnýn 1 den 10 a kadar carpým tablosunu yazar.
 }
 
 getch();
}
