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


//kullan�c�dan bir ki�inin ya��n� ister ve bu ki�inin se�imlerde oy kullan�p kullanamayaca��n� belirler.
//E�er ki�inin ya�� 18 veya daha b�y�kse, ekrana "Bu ki�i se�imlerde oy kullanabilir." yazar�z. 
//E�er ki�inin ya�� 18'den k���kse, ekrana "Bu ki�i se�imlerde oy kullanamaz." yazd�r�l�r.

