#include<stdio.h>

int main()
{
   int yas;

   printf("Lutfen kisinin yasini giriniz: ");
   scanf("%d", &yas);

   if(yas >= 18)
   {
      printf("Bu kisi secimlerde oy kullanabilir.\n");
   }
   else
   {
      printf("Bu kisi secimlerde oy kullanamaz.\n");
   }

   return 0;
}


//kullanýcýdan bir kiþinin yaþýný ister ve bu kiþinin seçimlerde oy kullanýp kullanamayacaðýný belirler.
//Eðer kiþinin yaþý 18 veya daha büyükse, ekrana "Bu kiþi seçimlerde oy kullanabilir." yazarýz. 
//Eðer kiþinin yaþý 18'den küçükse, ekrana "Bu kiþi seçimlerde oy kullanamaz." yazdýrýlýr.

