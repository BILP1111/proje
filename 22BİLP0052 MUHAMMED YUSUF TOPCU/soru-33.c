#include <stdio.h>
#include <conio.h>
 
int main()
{
 int sayi = 0;
 int rakam = 0;
 int toplam = 0;
 //�stenilen de�er atamalar� yap�l�r.
 
 printf("\nBir Sayi Giriniz : ");//Ki�iden istenilen bilgileri veriniz.
 scanf("%i",&sayi);

 while( sayi > 0 )//Say�n�n 0 dan b�y�k olmas�n� sa�lar.
 {
  rakam = sayi%10;
  toplam = toplam + rakam;
  sayi = sayi/10;
 }
 
 printf("\nSayidaki rakamlarin toplami %i",toplam);//Rakamlar�n toplam�n� ekrana yazar.
 getch();
}
