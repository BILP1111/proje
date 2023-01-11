// 1den 25e ileri ve 25den 1e geri sayan program.

#include <stdio.h> // KÜTÜPHANE TANIMLAMA

int main() {
	
	int sayi; // DEÐER TANIMLAMA
	
	printf("1-25 SAYIM\n"); // EKRANA YAZDIRMA
	printf("-------------------------\n"); // EKRANA YAZDIRMA
	
	for(sayi=1;sayi<=25;sayi++) { // DÖNGÜ AÇMA SAYIYI 1 DEN BAÞLATIP 25 E KADAR 1 ARTTIRMA
		printf("sayi: %d \n",sayi); // SAYÝYÝ EKRANDA GÖSTERME
	}
	
	printf("\n25-1 SAYIM\n"); // EKRANA YAZDIRMA
	printf("-------------------------\n"); // EKRANA YAZDIRMA
	
	for(sayi=25;sayi>=1;sayi--) { // DÖNGÜ AÇMA SAYIYI 25 DEN BAÞLATIP 1 E KADAR 1 AZALTMA
		printf("sayi: %d\n",sayi); // SAYÝYÝ EKRANDA GÖSTERME
	}
	
	return 0;
}
