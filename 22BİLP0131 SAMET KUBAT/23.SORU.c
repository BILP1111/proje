#include <stdio.h>

int main() {
  int kenar;
  int alan;
  int cevre;

  printf("karenin kenar uzunluðunu giriniz: ");
  scanf("%d", &kenar);
 
  alan = kenar * kenar;
  printf("Karenin alaný: %d\n", alan);
 
  cevre = 4 * kenar;
  printf("Karenin cevresi: %d\n", cevre);
 
  return 0;
}

// karenin bir kenar uzunluðunu girmesini istedik.sonrasýnda aln ve çevre sonucu ortaya çýktý//
