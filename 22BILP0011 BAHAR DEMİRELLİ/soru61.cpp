#include <stdio.h>
#include <conio.h>
 
int main()
{
      void asalsayi(int);
      int sayi = 0;
 
      printf("\n Bir sayi giriniz : ");
      scanf("%i",&sayi);
      fflush(stdin);
 
      asalsayi(sayi);
 
      getch();
}
 
void asalsayi(int sayi)
{
      int i  = 0;
      char prime = 'E';
 
      for(i=2;i<sayi;i++)
      {
            if( sayi % i == 0 )
            {
                prime = 'H';
                break;
            }
      }
 
      if( prime == 'E' )
            printf("\n %i bir asal sayidir.",sayi);
      else
            printf("\n %i bir asal sayi degildir.",sayi);
}
// kullan�c�dan bir say� al�r ve bu say�n�n asal olup olmad���n� belirler. Program, bir fonksiyon olarak tan�mlanan "asalsayi()" fonksiyonunu �a��rarak bu i�lemi yapar. "asalsayi()" fonksiyonu, girilen say�n�n 2 ile say�n�n kendisi aras�ndaki say�lardan biriyle tam b�l�n�p b�l�nmedi�ine bakar. E�er tam b�l�n�rse, bu say� asal say� de�ildir ve program "sayi bir asal sayi degildir" mesaj�n� yazd�r�r. E�er tam b�l�nmezse, bu say� asal say�d�r ve program "sayi bir asal sayidir" mesaj�n� yazd�r�r.
