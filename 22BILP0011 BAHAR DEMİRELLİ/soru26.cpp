#include <stdio.h>
 
int main()
{
 int sayi = 0;
 int n = 0;
 long int sonuc = 1;
 
 
 printf("\n Faktoriyel...");
 printf("\n =============");
 
 printf("\n Bir Sayi giriniz : ");
 scanf("%i",&sayi);
 fflush(stdin); //��k�� ak��lar� i�in, ak���n arabelle�indeki yaz�lmam�� veriyi ilgili ��k�� ayg�t�na yazar.
 
 for( n = 1;n <= sayi; n++)
 {
  sonuc = sonuc * n;
 }
 
 printf("\n %i! = %li ",sayi,sonuc);
 
 return 0;
}

//For d�ng�s�, programlama dillerinde temel olarak bir kod blokunu belirli bir say�da ve �st �ste �al��t�rmak i�in kullan�lan bir d�ng�d�r.
