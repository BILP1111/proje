#include <stdio.h>

int main() {
  char metin[11];
  
  printf("L�tfen bir metin girin (max 10karakter): ");
  scanf("%10s", metin);
  
  printf("Girilen metin: %s\n", metin);
  
  return 0;
}

