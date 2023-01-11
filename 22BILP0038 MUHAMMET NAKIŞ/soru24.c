// 1den 50ye kadar olan tum dogal sayilari tek ve cift sayilari ayri ayri yazdiran program.

#include <stdio.h>

int main() {
	
	int sayi;
	printf("DOGAL SAYILAR\n"); // EKRANA YAZDIRMA
	printf("-------------------------\n"); // EKRANA YAZDIRMA
	
	for(sayi=1;sayi<=50;sayi++) { // DÖNGÜ AÇMA sayi 1 DEN BAÞLAYARAK 50 VE 50 YE EÞÝT ÞEKÝLDE 1 ARTTIRMA
		printf("sayi: %d\n",sayi); // sayi'YI EKRANA YAZDIRMA
	}
	
	printf("\nCIFT SAYILAR\n"); // EKRANA YAZDIRMA
	printf("-------------------------\n"); // EKRANA YAZDIRMA
	
	for(sayi=0;sayi<=50;sayi= sayi+2) { // DÖNGÜ AÇMA sayi 0 DEN BAÞLAYARAK 50 VE 50 YE EÞÝT ÞEKÝLDE 2 ARTTIRMA
		printf("sayi: %d\n",sayi); // sayi'YI EKRANA YAZDIRMA
	}
	
	printf("\nTEK SAYILAR\n"); // EKRANA YAZDIRMA
	printf("-------------------------\n"); // EKRANA YAZDIRMA
	
	for(sayi=1;sayi<=50;sayi = sayi+2) { // DÖNGÜ AÇMA sayi 1 DEN BAÞLAYARAK 50 VE 50 YE EÞÝT ÞEKÝLDE 2 ARTTIRMA
		printf("sayi: %d\n",sayi); // sayi'YI EKRANA YAZDIRMA
	}
	
	return 0;
}
