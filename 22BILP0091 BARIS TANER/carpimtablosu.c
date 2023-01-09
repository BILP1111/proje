#include <stdio.h>

int main(){ // Girilen bir sayı için çarpım tablosunu yazdıran program

  int carpan = 0, carpilan = 0;
  printf("Sayi giriniz : ");
  scanf("%d", &carpan);

  for(carpan; carpan < 11; carpan++){ // carpani ilk dongude alip
    for(carpilan = 1; carpilan < 11; carpilan++){ // carpilanla girilen sayidan sonra carpim tablosunu getirme
      fprintf(stdout, "%d * %d = %d\n", carpan, carpilan, carpan * carpilan);
    }
    fprintf(stdout, "\n");
  }

  return 0;
}