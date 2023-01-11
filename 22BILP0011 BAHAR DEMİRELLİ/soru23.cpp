#include <stdio.h>
int main()
{
   int i;

   // ileri sayım
   printf("Counting from 1 to 25...\n");
   for (i = 1; i <= 25; i++)
   {
      printf("%d ", i);
   }

   printf("\n"); // satır atlama

   // geri sayım
   printf("Counting from 25 to 1...\n");
   for (i = 25; i >= 1; i--)
   {
      printf("%d ", i);
   }

   return 0;
}
//1'den 25'e ileri ve 25'den 1'e geri sayım yapar.
