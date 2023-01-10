#include <stdio.h>

int main(void) {
  int num1, num2;
  char operation;

  printf("iki tamsayi giriniz: ");
  scanf("%d%d", &num1, &num2);

  printf("bir iþlem girin (+, -, *, /, or %): ");
  scanf(" %c", &operation);

  if (operation == '+') {
    printf("%d\n", num1 + num2);
  } else if (operation == '-') {
    printf("%d\n", num1 - num2);
  } else if (operation == '*') {
    printf("%d\n", num1 * num2);
  } else if (operation == '/') {
    printf("%d\n", num1 / num2);
  } else if (operation == '%') {
    printf("%d\n", num1 % num2);
  } else {
    printf("geçersiz islem.\n");
  }

  return 0;
}
//SECTÝÐÝMÝZ ÝÞLEMÝ YAPAR//
