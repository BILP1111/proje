// negatif bir sayý girilene kadar kullanýcýdan deðer isteyen program

#include <stdio.h>

int main(void) {
  int deger;

  do {
    printf("Lütfen bir sayý giriniz:");
    scanf("%d", &deger);
  } while (deger >= 0);

  return 0;
}
