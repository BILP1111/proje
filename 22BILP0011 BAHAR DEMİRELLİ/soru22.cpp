#include <stdio.h>
 
int main()
{
 int sayi = 0;
 int i = 0;
 char tek = 'E';
 
 
 printf("\n Bir sayi giriniz : ");
 scanf("%i",&sayi);
 fflush(stdin);
 
 for(i=2;i<sayi;i++)
 {
  if( sayi % i == 0 )
  {
   tek = 'H';
   break;
  }
 }
 
 if( tek == 'E' )
  printf("\n %i sayi asaldir.",sayi);
 else
  printf("\n %i sayisi asal degildir.",sayi);
 
return 0;
}

//Bu program, kullan�c�dan bir tamsay� girdisini al�r ve girilen say�n�n asal olup olmad���n� kontrol eder. 
//E�er girilen say� asal ise "say� asald�r" yazd�r�r, aksi halde "say� asal de�ildir" yazd�r�r.
