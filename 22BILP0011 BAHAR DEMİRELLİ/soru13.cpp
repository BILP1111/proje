#include<stdio.h>
int main()
{
   int yil;

   printf("Lutfen yili giriniz: ");
   scanf("%d", &yil);

   if((yil % 4 == 0 && yil % 100 != 0) || yil % 400 == 0)
   {
      printf("Girilen yil artik yildir.\n");
   }
   else
   {
      printf("Girilen yil artik yil degildir.\n");
   }

   return 0;
}
//kullan�c�dan bir y�l girdi�ini al�r ve girilen y�l�n art�k y�l olup olmad���n� tespit eder. 
//Art�k y�l, y�l�n 4'e tam b�l�n�p 100'e b�l�nmedi�i ve 400'e tam b�l�nd��� y�l.
