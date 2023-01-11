#include <stdio.h> // KÜTÜPHANE TANIMLAMA

int main() {
	
	int kenar1=0, kenar2=0, kenar3=0; // DEĞER TANIMLAMA
	
	printf("1. Kenar uzunlugunu giriniz : \n"); // KULLANICIDAN DEĞER ALMA
	scanf("%d",&kenar1); // DEĞERİ HAFIZADA TUTMA
	
	printf("2. Kenar uzunlugunu giriniz : \n"); 
	scanf("%d",&kenar2); 
	
	printf("3. Kenar uzunlugunu giriniz : \n"); 
	scanf("%d",&kenar3); 
	
	if(kenar1 == kenar2 && kenar2 == kenar3) { // EĞER kenar1 == kenar2 VE kenar2 == kenar3 İSE
		printf("Tum Kenarlar Esit.\n"); // EKRANA YAZDIRMA
		printf("ESKENAR UCGEN"); 
	}
	else if(kenar1 == kenar2 || kenar2 == kenar3 || kenar1 == kenar3){ // EĞER kenar1 == kenar2 VEYA kenar2 == kenar3 VEYA kenar1 == kenar3
		printf("Iki Kenar Esit.\n"); // EKRANA YAZDIRMA
		printf("IKIZKENAR UCGEN"); 
	}
	else { // DEĞİLSE
		printf("Kenarlar Esit Degil.\n"); // EKRANA YAZDIRMA
		printf("KARMA UCGEN");
	}
	
	return 0;
}