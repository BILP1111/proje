#include <stdio.h>
#include <conio.h>
 
int main()
{
 int sayi = 0;
 int n = 0;
 char tek = 'E';
 //De�er atama i�lemi yap�l�r.
 
 printf("\n Bir sayi giriniz : ");//Ki�iden Say� girmesini ister.
 scanf("%i",&sayi);
 
 for(n=2;n<sayi;n++)//For d�ng�s� ile say�lar� d�ng�ye girer.
 {
  if( sayi % n == 0 )
  {
   tek = 'H';
   break;
  }
 }
 
 if( tek == 'E' )//Girilen say� asal say�d�r.
  printf("\n %i sayisi ASAL sayidir.",sayi);
 else
  printf("\n %i sayisi asal sayi DEGIL.",sayi);//Girilen say� asal de�ildir.
 
 getch();
}
