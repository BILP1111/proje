//Klavyeden girilen harfin sesli harf olup olmadýðýný kontrol eden program



#include <stdio.h>

int main(void){
  char ch;

  printf("Bir harf girin:");
  ch = getchar();

  if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
    printf("Girilen harf seslidir\n");
  } else {
    printf("Girilen harf sessizdir\n");
  }
  return 0;
}
