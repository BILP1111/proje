#include <stdio.h>

int main(void) {
  int day;

  printf("bir gun giriniz (1-7): ");
  scanf("%d", &day);

  if (day == 1) {
    printf("Pazartesi\n");
  } else if (day == 2) {
    printf("Sali\n");
  } else if (day == 3) {
    printf("carsamba\n");
  } else if (day == 4) {
    printf("persenbe\n");
  } else if (day == 5) {
    printf("cuma\n");
  } else if (day == 6) {
    printf("cumartesi\n");
  } else if (day == 7) {
    printf("pazar\n");
  } else {
    printf("gecersiz gun numarasi.\n");
  }

  return 0;
}
//Kullanýcýdan haftanýn gün numarasýný alýr ve daha sonra bu deðere göre koþullarý kontrol eder. Eðer deðer 1 ise, "Pazartesi" yazdýrýlýr; 2 ise, "Salý" yazdýrýlýr; vs.//
