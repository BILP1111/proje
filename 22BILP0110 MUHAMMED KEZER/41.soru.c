//5 ��rencinin boy ve kilolar�n�n ortalamas�n� bulan program
#include <stdio.h>

int main(void) {
  float total_weight = 0, total_height = 0;
  int i;

  for (i = 0; i < 5; i++) {
    float weight, height;
    printf("L�tfen %d. ki�inin kilosunu ve boyunu girin (kilosu boyu �eklinde): ", i + 1);
    scanf("%f %f", &weight, &height);
    total_weight += weight;
    total_height += height;
  }

  printf("Ortalama kilo: %.2f\n", total_weight / 5);
  printf("Ortalama boy: %.2f\n", total_height / 5);

  return 0;
}
