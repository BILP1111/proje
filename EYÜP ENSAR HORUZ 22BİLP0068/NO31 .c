#include <stdio.h>
#include <conio.h>
 
void main(void)  // de�i�kenin tipi belli olmad��� i�in void de�erini atad�k
{
 int sayi = 0;
 
 clrscr();   // clrscr ekrandakileri siler. Yani yeni de�er girilene kadar s�rekli silme i�lemi devam etmektedir.
 
 while( sayi >= 0)    // while d�ng�s� kullan�larak sayinin ko�ullu �ekilde ilerlemesi sa�lan�r.
 {
  printf("\nSayi? : ");    // ekrana sayi girilmesi istenir ve girilen say� programa tan�t�l�r.
  scanf("%i",&sayi);
  fflush(stdin);    //fflush, ara belle�i temizlemek ve ��kt� ak���n�n (stdout) sonu�lar�n� g�r�nt�lemek i�in kullan�l�r.
 
  printf("%i sayisini girdiniz.",sayi);  // girilen sayinin ekran ��kt�s�n� verir
 }
}
