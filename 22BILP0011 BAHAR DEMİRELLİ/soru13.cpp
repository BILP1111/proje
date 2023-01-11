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
//kullanýcýdan bir yýl girdiðini alýr ve girilen yýlýn artýk yýl olup olmadýðýný tespit eder. 
//Artýk yýl, yýlýn 4'e tam bölünüp 100'e bölünmediði ve 400'e tam bölündüðü yýl.
