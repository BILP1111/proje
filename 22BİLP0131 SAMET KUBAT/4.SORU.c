#include <stdio.h>

int main(void) {
  int araliklar[] = {0, 25, 50, 75, 100}; 
  int n = sizeof(araliklar) / sizeof(int); 
  int sayi; 
  
  printf("Lutfen bir sayi girin: ");
  scanf("%d", &sayi);
  
  
  int sol = 0, sag = n - 1;
  while (sol <= sag) {
    int orta = (sol + sag) / 2;
    if (sayi >= araliklar[orta] && sayi < araliklar[orta + 1]) {
      printf("%d, %d ile %d arasinda\n", sayi, araliklar[orta], araliklar[orta + 1]);
      break;
    } else if (sayi < araliklar[orta]) {
      sag = orta - 1;
    } else {
      sol = orta + 1;
    }
  }
  
  return 0;
}
//bir sayý alýr ve daha sonra ikili arama metodu ile bu sayýnýn hangi aralýkta olduðunu buluyor. Eðer sayý bulunamazsa program hiçbir çýktý vermiyor.//

