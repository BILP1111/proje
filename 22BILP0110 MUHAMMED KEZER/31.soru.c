// negatif bir say� girilene kadar kullan�c�dan de�er isteyen program

#include <stdio.h>

int main(void) {
  int deger;

  do {
    printf("L�tfen bir say� giriniz:");
    scanf("%d", &deger);
  } while (deger >= 0);

  return 0;
}
