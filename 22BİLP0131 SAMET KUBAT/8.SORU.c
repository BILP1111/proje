#include <stdio.h>
#include <string.h>

int main(void) {
  char kelime[100]; 
  
  printf("Lutfen bir kelime girin: ");
  scanf("%s", kelime);
  
  
  int karakter_sayisi = strlen(kelime);
  
  printf("Girilen kelime %d karakterden olusuyor.\n", karakter_sayisi);
  
  return 0;
}

//  Bu kod bir kelime istiyor ve kelime içindeki karakterlerin sayýsýný buluyor //
