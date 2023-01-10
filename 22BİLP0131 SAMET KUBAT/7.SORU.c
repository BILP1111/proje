#include <stdio.h>
#include <string.h>

int main(void) {
  char kelime1[100], kelime2[100]; 
  
  printf("Lutfen iki kelime girin: ");
  scanf("%s %s", kelime1, kelime2);
  
  
  int kelime1_uzunlugu = strlen(kelime1);
  int kelime2_uzunlugu = strlen(kelime2);
  
  
  if (kelime1_uzunlugu > kelime2_uzunlugu) {
    printf("%s kelimesi daha uzun.\n", kelime1);
  } else if (kelime1_uzunlugu < kelime2_uzunlugu) {
    printf("%s kelimesi daha uzun.\n", kelime2);
  } else {
    printf("Ýki kelime eþit uzunlukta.\n");
  }
  
  return 0;
}
//bizden iki kelime istiyor ve sonuçta hangisinin daha uzun veya kýsa olduðunu yazdýrýyor//

