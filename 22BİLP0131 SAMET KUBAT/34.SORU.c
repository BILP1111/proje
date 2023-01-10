#include <stdio.h>

long long int factorial(int n) {
  if (n == 0 || n == 1) {
    return 1;
  }

  return n * factorial(n - 1);
}

int main(void) {
  int n;
  printf("Lutfen bir sayi girin: ");
  scanf("%d", &n);

  printf("%d! = %lld\n", n, factorial(n));

  return 0;
}
//factorial adýmda bir fonksiyon oluþturulur. Bu fonksiyon n deðiþkenine göre bir sayýnýn faktöriyelini hesaplar. //
