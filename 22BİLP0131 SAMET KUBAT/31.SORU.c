#include <stdio.h>

#define ROWS 4
#define COLS 4

int main(void) {
  int matrix[ROWS][COLS];
  int transpose[COLS][ROWS];

  printf("Lutfen matrisin degerlerini girin:\n");
  for (int i = 0; i < ROWS; i++) {
    for (int j = 0; j < COLS; j++) {
      printf("[%d][%d]: ", i, j);
      scanf("%d", &matrix[i][j]);
    }
  }

  printf("\nGirilen matris:\n");
  for (int i = 0; i < ROWS; i++) {
    for (int j = 0; j < COLS; j++) {
      printf("%d ", matrix[i][j]);
    }
    printf("\n");
  }

  for (int i = 0; i < ROWS; i++) {
    for (int j = 0; j < COLS; j++) {
      transpose[j][i] = matrix[i][j];
    }
  }

  printf("\nMatrisin transpozesi:\n");
  for (int i = 0; i < COLS; i++) {
    for (int j = 0; j < ROWS; j++) {
      printf("%d ", transpose[i][j]);
    }
    printf("\n");
  }

  return 0;
}
//Matris adlý bir 2 boyutlu dizi oluþturulur ve kullanýcýdan bu dizinin deðerleri alýnýr.//
