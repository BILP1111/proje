#include <stdio.h>
int main()
{
   int sayi;

   printf("Lutfen bir sayi giriniz: ");
   scanf("%d", &sayi);

   if(sayi % 2 == 0) //ko�ul
   {
      printf("Girilen sayi cifttir.\n");
   }
   else //de�ilse
   {
      printf("Girilen sayi tektir.\n");
   }

   return 0; //s�f�rlamak
}
//kullan�c�dan bir say� girmesi istenir ve bu say�n�n tek veya �ift olup olmad��� belirlenir. 
//E�er say� �iftse, ekrana "Girilen say� �ifttir." yazd�r�l�r. E�er say� tekse, ekrana "Girilen say� tektir." yazd�r�l�r.
