#include <stdio.h>
#include <string.h>

int main() {
  char kelime1[100], kelime2[100];
  int uzunluk1, uzunluk2;
  
  printf("L�tfen birinci kelimeyi girin: ");
  scanf("%s", kelime1);
  printf("L�tfen ikinci kelimeyi girin: ");
  scanf("%s", kelime2);
  
  uzunluk1 = strlen(kelime1);
  uzunluk2 = strlen(kelime2);
  
  if (uzunluk1 > uzunluk2) {
    printf("%s kelimesi daha uzun.\n", kelime1);
  } else if (uzunluk2 > uzunluk1) {
    printf("%s kelimesi daha uzun.\n", kelime2);
  } else {
    printf("�ki kelime ayn� uzunlukta.\n");
  }
  
  return 0;
}


