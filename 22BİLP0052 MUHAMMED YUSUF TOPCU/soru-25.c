#include <stdio.h>
#include <conio.h>
 
int main()
{
 int sayi = 0;
 int n = 0;
 //De�er atar.
 
 printf("\n Carpim Tablosu...");//Girilen say�n�n 1 e kadar �arp�m tablosu ��karan program
 printf("\n =================");
 
 printf("\n Bir sayi girin : ");//Ki�iden say� ister.
 scanf("%i",&sayi);
 
 printf("\n\n %i sayisi\n\n",sayi);//Girilen say�y� ekrana yazar.
 
 for(n=1;n<=10;n++)//For d�ng�s� ile 10 a kadar olan say�lar� ekrana yazar.
 {
  printf("\n %i * %i = %i",sayi,n,(sayi*n) );//Girilen say�n�n 1 den 10 a kadar carp�m tablosunu yazar.
 }
 
 getch();
}
