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

//Bu programda, scanf fonksiyonu kullan�larak karenin bir kenar uzunlu�u kullan�c�dan al�n�r ve alan ve �evre de�i�kenlerine atan�r. Daha sonra, alan ve �evre de�i�kenlerinin de�erleri ekrana yazd�r�l�r.
