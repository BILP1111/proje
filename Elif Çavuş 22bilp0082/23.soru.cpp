#include <stdio.h> // KÜTÜPHANE TANIMLAMA

int main() {
	
	int sayi; // DEĞER TANIMLAMA
	
	printf("1-25 SAYIM\n"); // EKRANA YAZDIRMA
	printf("-------------------------\n"); // EKRANA YAZDIRMA
	
	for(sayi=1;sayi<=25;sayi++) { // DÖNGÜ AÇMA SAYIYI 1 DEN BAŞLATIP 25 E KADAR 1 ARTTIRMA
		printf("sayi: %d \n",sayi); // SAYİYİ EKRANDA GÖSTERME
	}
	
	printf("\n25-1 SAYIM\n"); // EKRANA YAZDIRMA
	printf("-------------------------\n"); // EKRANA YAZDIRMA
	
	for(sayi=25;sayi>=1;sayi--) { // DÖNGÜ AÇMA SAYIYI 25 DEN BAŞLATIP 1 E KADAR 1 AZALTMA
		printf("sayi: %d\n",sayi); // SAYİYİ EKRANDA GÖSTERME
	}
	
	return 0;
}
