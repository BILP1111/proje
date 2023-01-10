#include <stdio.h>

int main(void) {
  int year;

  printf("bir yil giriniz ");
  scanf("%d", &year);

  if (year % 4 == 0) {
    printf("yil artik yil.\n");
  } else {
    printf("yil artik yil degil.\n");
  }

  return 0;
}
//kullanýcýdan bir yýl deðeri alýnýr sonra bu deðerin 4'e bölümünden kalanýný kontrol eder. Eðer kalan 0 ise, yýl artýk yýldýr; aksi halde yýl artýk yýl deðildir.//

