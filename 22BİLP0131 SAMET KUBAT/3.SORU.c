#include <stdio.h>
#include <string.h>

int main(void) {
  char cumle[100]; // kullanýcýdan alýnan cümle
  char aranan_karakter; // aranacak karakter
  
  printf("Lutfen bir cumle girin: ");
  scanf("%[^\n]s", cumle); 
  
  printf("Lutfen aranacak karakteri girin: ");
  scanf(" %c", &aranan_karakter); 
  
  int i;
  int karakter_sayisi = 0; 
  for (i = 0; i < strlen(cumle); i++) {
    
    if (cumle[i] == aranan_karakter) {
      karakter_sayisi++;
    }
  }
  
  printf("Cumle icinde %c karakterinden %d tane var.\n", aranan_karakter, karakter_sayisi);
  
  return 0;
}
//kullanýcýdan bir cümle ve bir karakter alýyor Daha sonra cümlenin içinde kaç tane o karakter olduðunu buluyor ve printf le ekrana yazdýrýyor.//
