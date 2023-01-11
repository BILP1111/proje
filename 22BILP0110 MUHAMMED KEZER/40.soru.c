/* bir dizi i�erisinde aranan say�y� veren program */


#include <stdio.h>

int main(void) {
  int dizi[5] = {1, 2, 3, 4, 5}; // Örnek bir dizi
  int aranan_sayi = 3; // Aranan sayı
  int bulundu = 0; // Aranan sayının dizide olup olmadığını tutacak değişken

  // Dizi içerisinde aranan sayıyı arıyoruz
  for (int i = 0; i < 5; i++) {
    if (dizi[i] == aranan_sayi) {
      printf("Aranan sayı dizide bulundu!\n");
      bulundu = 1;
      break;
    }
  }

  // Aranan sayı dizide bulunamazsa uyarı veriyoruz
  if (bulundu == 0) {
    printf("Aranan sayı dizide bulunamadı.\n");
  }

  return 0;
}
