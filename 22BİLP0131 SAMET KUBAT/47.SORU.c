#include <stdio.h>

int main(void) {
   int c, sum = 0, r;

   printf("bir numara giriniz: ");
   scanf("%d", &c);

   while (c != 0) {
      r = c % 10;  // Sayýnýn birler basamaðýný alýr.
      sum = sum + r;  // Toplamý günceller.
      c = c / 10;  // Sayýyý 10'a böler ve kalaný atar.
   }

   printf("rakamlarýn toplami: %d\n", sum);

   return 0;
}
//Bu program çalýþtýrýldýðýnda, kullanýcýdan bir sayý girilmesi beklenir ve kullanýcýnýn girdiði sayýdaki rakamlarýn toplamý hesaplanýr.//
