#include <stdio.h>

int main()
{
   char harf;

   printf("Lutfen bir harf giriniz: ");
   scanf(" %c", &harf);

   if(harf == 'a' || harf == 'e' || harf == 'i' || harf == 'o' || harf == 'u' || harf == 'A' || harf == 'E' || harf == 'I' || harf == 'O' || harf == 'U')
   {
      printf("Girilen harf sesli harftir.\n");
   }
   else
   {
      printf("Girilen harf sesli harf degildir.\n");
   }

   return 0;
}
// kullan�c�dan bir harf girer ve girilen harfin sesli harf olup olmad���n� sesli harflere y�nelik kurdu�um e�iti�e g�re kontrol eder. 
//E�er girilen harf sesli harfse, ekrana "Girilen harf sesli harftir." yazar. E�er girilen harf sesli harf de�ilse, ekrana "Girilen harf sesli harf de�ildir." yazar.
