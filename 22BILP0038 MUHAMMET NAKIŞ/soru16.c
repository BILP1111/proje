// Haftanýn gün numarasýna karþýlýk gelen gün adýný veren program.

#include <stdio.h> // KÜTÜPHANE TANIMLAMA

int main() {
	int guno; // DEÐER TANIMLAMA //
	
	printf("1 - PAZARTESI\n"); // GÜNLER //
	printf("2 - SALI\n");	   // GÜNLER //
	printf("3 - CARSAMBA\n");  // GÜNLER //
	printf("4 - PERSEMBE\n");  // GÜNLER //
	printf("5 - CUMA\n");	   // GÜNLER //
	printf("6 - CUMARTESI\n"); // GÜNLER //
	printf("7 - PAZAR\n");	   // GÜNLER //
	
	printf("Hafta Gun Numarasini Giriniz : ");	// EKRANDA KULLANICIDAN DEÐER ALMA //
	scanf("%d",&guno);	// INT DEÐERÝ HAFIZADA TUTMA //
	

	if(guno == 1)  // EÐER KLAVYEDEN 1'E BASARSA //
		printf("PAZARTESI"); // EKRANA YAZDIRMA //
	else if(guno == 2)	// EÐER KLAVYEDEN 2'YE BASARSA
		printf("SALI");		 // EKRANA YAZDIRMA //
	else if(guno == 3) // EÐER KLAVYEDEN 3'E BASARSA //
		printf("CARSAMBA");	 // EKRANA YAZDIRMA //
	else if(guno == 4)	// EÐER KLAVYEDEN 4'E BASARSA //
		printf("PERSEMBE");  // EKRANA YAZDIRMA //
	else if(guno == 5)	// EÐER KLAVYEDEN 5'E BASARSA //
		printf("CUMA");		 // EKRANA YAZDIRMA //
	else if(guno == 6)	// EÐER KLAVYEDEN 6'YA BASARSA //
		printf("CUMARTESI"); // EKRANA YAZDIRMA //
	else if(guno == 7)	// EÐER KLAVYEDEN 7'YE BASARSA //
		printf("PAZAR");	 // EKRANA YAZDIRMA //
		
	return 0;
}

