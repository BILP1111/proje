#include <stdio.h>

#define ROWS 3
#define COLS 3

int main(void) {
  int mat[ROWS][COLS];

  printf("Lutfen matrisin degerlerini girin:\n");
  for (int i = 0; i < ROWS; i++) {
    for (int j = 0; j < COLS; j++) {
      printf("[%d][%d]: ", i, j);
      scanf("%d", &mat[i][j]);
    }
  }

  printf("\nGirilen matris:\n");
  for (int i = 0; i < ROWS; i++) {
    for (int j = 0; j < COLS; j++) {
      printf("%d ", mat[i][j]);
    }
    printf("\n");
  }

  return 0;
}
//matris adlý bir 2 boyutlu dizi oluþturulur ve kullanýcýdan bu dizinin deðerleri alýnýr. Daha sonra, bu dizi ekrana yazdýrýlýr.//
