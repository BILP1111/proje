#include <stdio.h>
//girilen sayýyý kelimeye çeviren program
int main() {
  int rakam;
  
  printf("Lütfen bir rakam girin: ");
  scanf("%d", &rakam);
  
  if (rakam == 0) {
    printf("Sýfýr\n");
  } else {
    while (rakam > 0) {
      int birler = rakam % 10;
      switch (birler) {
        case 1:
          printf("Bir ");
          break;
        case 2:
          printf("Ýki ");
          break;
        case 3:
          printf("Üç ");
          break;
        case 4:
          printf("Dört ");
          break;
        case 5:
          printf("Beþ ");
          break;
        case 6:
          printf("Altý ");
          break;
        case 7:
          printf("Yedi ");
          break;
        case 8:
          printf("Sekiz ");
          break;
        case 9:
          printf("Dokuz ");
          break;
        default:
          printf("Sýfýr ");
          break;
      }
      rakam /= 10;
    }
    printf("\n");
  }
  
  return 0;
}

