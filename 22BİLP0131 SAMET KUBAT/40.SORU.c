#include <stdio.h>

int main(void) {
  int grade;

  printf("bir not girin: ");
  scanf("%d", &grade);

  if (grade >= 90) {
    printf("AA\n");
  } else if (grade >= 80) {
    printf("BA\n");
  } else if (grade >= 70) {
    printf("BB\n");
  } else if (grade >= 60) {
    printf("CB\n");
  } else if (grade >= 50) {
    printf("CC\n");
  } else {
    printf("FF\n");
  }

  return 0;
}
//Kullanýcýdan bir not deðeri alýr ve daha sonra bu deðere göre koþullarý kontrol eder. Eðer çýkqn deðer 90 veya daha yüksekse, "AA" yazdýrýlýr; 80 veya daha yüksekse, ancak 90'dan düþükse, "BA" yazdýrýlýr//

