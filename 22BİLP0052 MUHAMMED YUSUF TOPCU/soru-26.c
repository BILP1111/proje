#include <stdio.h>
#include <conio.h>
 
int main()
{
 int sayi = 0;
 int n = 0;
 long int sonuc = 1;
 //Deðer atar.
 
 printf("\n Faktoriyel...");//Girilen sayýnýn faktoriyelini hesaplar.
 printf("\n =============");
 
 printf("\n Bir Sayi giriniz : ");//Kiþiden sayý girmesini ister.
 scanf("%i",&sayi);
 
 for( n = 1;n <= sayi; n++)//for döngüsü ile faktoriyel iþlemi hazýr hale gelir.
 {
  sonuc = sonuc * n;//Ýþlem sonucu
 }
 
 printf("\n %i! = %li ",sayi,sonuc);//Sonucu ekrana yazdýrýr.
 
 getch();
}
