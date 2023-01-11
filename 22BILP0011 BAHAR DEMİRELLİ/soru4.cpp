#include <stdio.h>
int main() {
  int kenar;
  printf("Lutfen karenin bir kenarinin uzunlugunu girin: ");
  scanf("%d", &kenar);

  int alan = kenar * kenar;
  int cevre = 4 * kenar;

  printf("Karenin alani: %d\n", alan);
  printf("Karenin cevresi: %d\n", cevre);

  return 0;
}

//Bu programda, scanf fonksiyonu kullanýlarak karenin bir kenar uzunluðu kullanýcýdan alýnýr ve alan ve çevre deðiþkenlerine atanýr. Daha sonra, alan ve çevre deðiþkenlerinin deðerleri ekrana yazdýrýlýr.
