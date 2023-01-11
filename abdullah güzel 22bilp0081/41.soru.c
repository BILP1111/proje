//5 öðrencinin boy ve kilolarýnýn ortalamasýný bulan program
#include <stdio.h>

int main(void) {
  float total_weight = 0, total_height = 0;
  int i;

  for (i = 0; i < 5; i++) {
    float weight, height;
    printf("Lütfen %d. kiþinin kilosunu ve boyunu girin (kilosu boyu þeklinde): ", i + 1);
    scanf("%f %f", &weight, &height);
    total_weight += weight;
    total_height += height;
  }

  printf("Ortalama kilo: %.2f\n", total_weight / 5);
  printf("Ortalama boy: %.2f\n", total_height / 5);

  return 0;
}
