#include<stdio.h>

int main()
{
   int sayi1, sayi2;

   printf("Lutfen ilk sayiyi giriniz: ");
   scanf("%d", &sayi1);

   printf("Lutfen ikinci sayiyi giriniz: ");
   scanf("%d", &sayi2);

   if(sayi1 > sayi2)
   {
      printf("�lk sayi ikinci sayidan daha buyuktur.\n");
   }
   else if(sayi1 < sayi2)
   {
      printf("Ikinci sayi ilk sayidan daha buyuktur.\n");
   }
   else
   {
      printf("Iki sayi birbirine esittir.\n");
   }

   return 0;
}
//Ko�ul i�in if-else, kullan�c�dan iki tane say� girmesini ister ve bu say�lar�n b�y�kl���n� kar��la�t�r�r.
//E�er ilk say� ikinci say�dan daha b�y�kse, ekrana "�lk say� ikinci say�dan daha b�y�kt�r." yazd�r�l�r. 
//E�er ikinci say� ilk say�dan daha b�y�kse, ekrana "�kinci say� ilk say�dan daha b�y�kt�r." yazd�r�l�r. 
//E�er iki say� birbirine e�itse, ekrana "�ki say� birbirine e�ittir." yazd�r�l�r.
