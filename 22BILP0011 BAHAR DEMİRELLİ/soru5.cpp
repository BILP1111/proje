#include <stdio.h>

int main() {
  int kenar1, kenar2;
  printf("Lutfen dikdortgenin birinci kenarinin uzunlugunu girin: ");
  scanf("%d", &kenar1);
  printf("Lutfen dikdortgenin ikinci kenarinin uzunlugunu girin: ");
  scanf("%d", &kenar2);

  int alan = kenar1 * kenar2;
  int cevre = 2 * (kenar1 + kenar2);

  printf("Dikdortgenin alani: %d\n", alan);
  printf("Dikdortgenin cevresi: %d\n", cevre);

  return 0;
}

//Scanf fonksiyonu kullanýlarak dikdörtgenin iki kenar uzunluðu kullanýcýdan alýnýr ve alan ve çevre deðiþkenlerine atanýr. Daha sonra, alan ve çevre deðiþkenlerinin deðerleri ekrana yazdýrýlýr.

	
	
	
	
