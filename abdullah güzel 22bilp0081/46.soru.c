#include <stdio.h>
//girilen say�y� kelimeye �eviren program
int main() {
  int rakam;
  
  printf("L�tfen bir rakam girin: ");
  scanf("%d", &rakam);
  
  if (rakam == 0) {
    printf("S�f�r\n");
  } else {
    while (rakam > 0) {
      int birler = rakam % 10;
      switch (birler) {
        case 1:
          printf("Bir ");
          break;
        case 2:
          printf("�ki ");
          break;
        case 3:
          printf("�� ");
          break;
        case 4:
          printf("D�rt ");
          break;
        case 5:
          printf("Be� ");
          break;
        case 6:
          printf("Alt� ");
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
          printf("S�f�r ");
          break;
      }
      rakam /= 10;
    }
    printf("\n");
  }
  
  return 0;
}

