#include <stdio.h>
int main()
{
   int sayi;

   printf("Lutfen bir sayi giriniz: ");
   scanf("%d", &sayi);

   if(sayi % 2 == 0) //koþul
   {
      printf("Girilen sayi cifttir.\n");
   }
   else //deðilse
   {
      printf("Girilen sayi tektir.\n");
   }

   return 0; //sýfýrlamak
}
//kullanýcýdan bir sayý girmesi istenir ve bu sayýnýn tek veya çift olup olmadýðý belirlenir. 
//Eðer sayý çiftse, ekrana "Girilen sayý çifttir." yazdýrýlýr. Eðer sayý tekse, ekrana "Girilen sayý tektir." yazdýrýlýr.
