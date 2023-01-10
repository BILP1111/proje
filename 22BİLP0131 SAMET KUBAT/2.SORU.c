#include <stdio.h>
#include <stdbool.h>
bool asal_mi(int sayi) {
  if (sayi <= 1) {
    return false;
  }
  for (int i = 2; i * i <= sayi; i++) {
    if (sayi % i == 0) {
      return false;
    }
  }
  return true;
}

int main(void) {
  int sayi; 
  
  printf("Lutfen bir sayi girin: ");
  scanf("%d", &sayi);
  
 
  if (asal_mi(sayi)) {
    printf("Asal\n");
  } else {
    printf("Asal degil\n");
  }
  
  return 0;
}
//kullanýcýdan bir sayý alýr ve sayýnýn asal olup olmadýðýný hesaplar.//
