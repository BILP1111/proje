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

//Scanf fonksiyonu kullan�larak dikd�rtgenin iki kenar uzunlu�u kullan�c�dan al�n�r ve alan ve �evre de�i�kenlerine atan�r. Daha sonra, alan ve �evre de�i�kenlerinin de�erleri ekrana yazd�r�l�r.

	
	
	
	
