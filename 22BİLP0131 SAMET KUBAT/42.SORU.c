#include <stdio.h>

int main(void) {
  int yas;

  printf("yaþ girniz: ");
  scanf("%d", &yas);

  if (yas <= 0) {
    printf("bebek\n");
  } else if (yas <= 2) {
    printf("cocuk\n");
  } else if (yas <= 5) {
    printf("cocuk\n");
  } else if (yas <= 12) {
    printf("cocuk\n");
  } else if (yas <= 17) {
    printf("genç\n");
  } else if (yas <= 22) {
    printf("genç yetiþkin\n");
  } else if (yas <= 65) {
    printf("yetiþkin\n");
  } else {
    printf("yasli\n");
  }

  return 0;
}
//Kullanýcýdan bir yaþ deðeri alýnýr daha sonra bu deðere göre koþullarý kontrol eder. Eðer deðer 0 veya daha küçükse, "Bebek" yazdýrýlýr; 1 veya 2 ise, "Çocuk" yazdýrýlýr.//
