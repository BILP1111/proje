#include <stdio.h>
#include <conio.h>
 
int main()
{
 int sayi = 0;
 //say� de�eri atan�r.
 
 while( sayi >= 0)//While d�ng�s� ile 0 dan b�y�k say� girmesini ister ve ekrana yazd�r�r.
 {
  printf("\nSayi? : ");//Say�y� giriniz
  
  scanf("%i",&sayi);
 
  printf("%i sayisini girdiniz.",sayi);//En son ki a�ama ekrana yazd�r�r.
 }
}
