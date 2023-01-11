// Girilen bir nota karþýlýk gelen durummu yazdýran program.

#include <stdio.h> // KÜTÜPHANE TANIMLAMA

int main() 
{
	float not1; // DEÐER TANIMLAMA
	
	printf("Notunuzu Giriniz : "); // KULLANICIDAN DEÐER ALMA
	scanf("%f",&not1); // DEÐERÝ HAFIZADA TUTMA
	
	if(not1 >= 50) // EÐER not1 50'DEN BÜYÜK VE 50 YE EÞÝTSE 
		printf("GECTI"); // EKRANA YAZDIRMA
	else //DEÐÝLSE
		printf("KALDI"); // EKRANA YAZDIRMA		
	
	return 0;
}
