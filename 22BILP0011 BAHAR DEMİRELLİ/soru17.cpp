#include <stdio.h>

int main()
{
   int yas;

   printf("Lutfen yasinizi giriniz: ");
   scanf("%d", &yas);

   if(yas < 0)
   {
      printf("Gecersiz yas!\n");
   }
   else if(yas < 3)
   {
      printf("Bebeklik donemi\n");
   }
   else if(yas < 7)
   {
      printf("Cocukluk donemi\n");
   }
   else if(yas < 12)
   {
      printf("Ilkogretim donemi\n");
   }
   else if(yas < 15)
   {
      printf("Ortaogretim donemi\n");
   }
   else if(yas < 18)
   {
      printf("Lise donemi\n");
   }
   else
   {
      printf("Yetiskinlik donemi\n");
   }

   return 0;
}
//Bu kod par�as�, kullan�c�dan bir ya� girdi�ini al�r ve girilen ya�a kar��l�k gelen hayat d�nemini yazd�r�r.
