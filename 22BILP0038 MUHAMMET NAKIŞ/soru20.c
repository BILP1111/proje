// Bir üçgenin girilen üç kenarýna göre üçgen türünü bulan program.

#include <stdio.h> // KÜTÜPHANE TANIMLAMA

int main() {
	
	int kenar1=0, kenar2=0, kenar3=0; // DEÐER TANIMLAMA
	
	printf("1. Kenar uzunlugunu giriniz : \n"); // KULLANICIDAN DEÐER ALMA
	scanf("%d",&kenar1); // DEÐERÝ HAFIZADA TUTMA
	
	printf("2. Kenar uzunlugunu giriniz : \n"); // KULLANICIDAN DEÐER ALMA
	scanf("%d",&kenar2); // DEÐERÝ HAFIZADA TUTMA
	
	printf("3. Kenar uzunlugunu giriniz : \n"); // KULLANICIDAN DEÐER ALMA
	scanf("%d",&kenar3); // DEÐERÝ HAFIZADA TUTMA
	
	if(kenar1 == kenar2 && kenar2 == kenar3) { // EÐER kenar1 == kenar2 VE kenar2 == kenar3 ÝSE
		printf("Tum Kenarlar Esit.\n"); // EKRANA YAZDIRMA
		printf("ESKENAR UCGEN"); // EKRANA YAZDIRMA
	}
	else if(kenar1 == kenar2 || kenar2 == kenar3 || kenar1 == kenar3){ // EÐER kenar1 == kenar2 VEYA kenar2 == kenar3 VEYA kenar1 == kenar3
		printf("Iki Kenar Esit.\n"); // EKRANA YAZDIRMA
		printf("IKIZKENAR UCGEN"); // EKRANA YAZDIRMA
	}
	else { // DEÐÝLSE
		printf("Kenarlar Esit Degil.\n"); // EKRANA YAZDIRMA
		printf("KARMA UCGEN"); // EKRANA YAZDIRMA
	}
	
	return 0;
}
