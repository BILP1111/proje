#include <stdio.h>

int main(void) {
   int c, i, j, k;

   printf("satir sayisi girin: ");
   scanf("%d", &c);

   for (i = 1; i <= c; i++) {
      for (j = 1; j <= c - i; j++) {
         printf(" ");
      }

      for (k = 1; k <= i; k++) {
         printf("%d ", k);
      }

      printf("\n");
   }

   return 0;
}
//Bu program çalýþtýrýldýðýnda, kullanýcýdan satýr sayýsýný isteyen bir mesaj gösterilir ve kullanýcýdan bir sayý girilmesi beklenir. Daha sonra, kullanýcýnýn girdiði sayý kadar satýr oluþturulur //
