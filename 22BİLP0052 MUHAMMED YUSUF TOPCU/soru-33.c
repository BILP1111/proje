#include <stdio.h>
#include <conio.h>
 
int main()
{
 int sayi = 0;
 int rakam = 0;
 int toplam = 0;
 //Ýstenilen deðer atamalarý yapýlýr.
 
 printf("\nBir Sayi Giriniz : ");//Kiþiden istenilen bilgileri veriniz.
 scanf("%i",&sayi);

 while( sayi > 0 )//Sayýnýn 0 dan büyük olmasýný saðlar.
 {
  rakam = sayi%10;
  toplam = toplam + rakam;
  sayi = sayi/10;
 }
 
 printf("\nSayidaki rakamlarin toplami %i",toplam);//Rakamlarýn toplamýný ekrana yazar.
 getch();
}
