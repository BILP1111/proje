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
// kullanýcýdan bir harf girer ve girilen harfin sesli harf olup olmadýðýný sesli harflere yönelik kurduðum eþitiðe göre kontrol eder. 
//Eðer girilen harf sesli harfse, ekrana "Girilen harf sesli harftir." yazar. Eðer girilen harf sesli harf deðilse, ekrana "Girilen harf sesli harf deðildir." yazar.
