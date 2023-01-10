#include <stdio.h>

#define NUM_STUDENTS 5

int main(void) {
  int heights[NUM_STUDENTS];
  int weights[NUM_STUDENTS];
  int total_height = 0;
  int total_weight = 0;

  for (int i = 0; i < NUM_STUDENTS; i++) {
    printf("%d. ogrencinin boyu (cm): ", i + 1);
    scanf("%d", &heights[i]);
    printf("%d. ogrencinin kilosu (kg): ", i + 1);
    scanf("%d", &weights[i]);
  }

  for (int i = 0; i < NUM_STUDENTS; i++) {
    total_height += heights[i];
    total_weight += weights[i];
  }

  printf("\nOrtalama boy: %.2f cm\n", (float) total_height / NUM_STUDENTS);
  printf("Ortalama kilo: %.2f kg\n", (float) total_weight / NUM_STUDENTS);

  return 0;
}
//heights ve weights adlý iki dizi oluþturulur ve bu dizilerde öðrencilerin boy ve kilo bilgileri saklanýr. Daha sonra, bu dizilerin elemanlarý toplamlarý hesaplanýr ve son olarak, bu toplamlar ortalama deðerlerine bölünür ve ekrana yazdýrýlýr//

