#include <stdio.h>

int main() { // İki kenarı girilen dikdörtgenin karesi ve çevresini bulan program
    int kkenar,ukenar,alan,cevre; 	
	printf("Kisa Kenar giriniz : ");
	scanf("%d",&kkenar);
	printf("Uzun Kenar giriniz : ");
	scanf("%d",&ukenar);

	alan = kkenar * ukenar; // alan eşittir kısa kenar çarpı uzun kenar
	cevre = 2 * (kkenar*ukenar);
	
	printf("Alan : %d \n",alan);
	printf("Cevre : %d \n",cevre);
  return 0;
}
