#include <stdio.h>

 
int main()
{
 int sayi = 0;
 int n = 0;
 
 
 printf("\n Carpim Tablosu...");
 printf("\n ====");
 
 printf("\n Bir sayi girin : ");
 scanf("%i",&sayi);
 fflush(stdin); //��k�� ak��lar� i�in, ak���n arabelle�indeki yaz�lmam�� veriyi ilgili ��k�� ayg�t�na yazar.
 
 printf("\n\n %i sayisi\n\n",sayi);
 
 for(n=1;n<=10;n++)
 {
  printf("\n %i * %i = %i",sayi,n,(sayi*n) );
 }
 
 return 0;
}
// girilen bir sayi icin carpim tablosunu yazdiran program
