#include <stdio.h>
#include <conio.h>
 
int main()
{
 int sayi = 0;
 int n = 0;
 long int sonuc = 1;
 //De�er atar.
 
 printf("\n Faktoriyel...");//Girilen say�n�n faktoriyelini hesaplar.
 printf("\n =============");
 
 printf("\n Bir Sayi giriniz : ");//Ki�iden say� girmesini ister.
 scanf("%i",&sayi);
 
 for( n = 1;n <= sayi; n++)//for d�ng�s� ile faktoriyel i�lemi haz�r hale gelir.
 {
  sonuc = sonuc * n;//��lem sonucu
 }
 
 printf("\n %i! = %li ",sayi,sonuc);//Sonucu ekrana yazd�r�r.
 
 getch();
}
