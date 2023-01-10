#include <stdio.h>
#include <string.h>

int main(void) {
  char kelime[100]; 
  int sesli_harf_sayisi = 0; 

  printf("Lutfen bir kelime girin: ");
  scanf("%s", kelime);

  int i;
  for (i = 0; i < strlen(kelime); i++) {
    
    if (kelime[i] == 'a' || kelime[i] == 'e' || kelime[i] == 'ý' || kelime[i] == 'i' || kelime[i] == 'o' || kelime[i] == 'ö' || kelime[i] == 'u' || kelime[i] == 'ü') {
      sesli_harf_sayisi++;
    }
  }

  printf("Girilen kelime içinde %d sesli harf var.\n", sesli_harf_sayisi);

  return 0;
}

//Cümledeki sesli harfleri bir deðiþkende topladýk,Sonrasýnda cümlenin karakter sayýsý kadar dönen bir for döngüsü oluþturup cümlenin her harfine eriþtik.//
