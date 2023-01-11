// kullaniciya medeni halini evli ise kac cocugu oldugunu soran ve gerekli mesaji veren program.

#include <stdio.h> // KÜTÜPHANE TANIMLAMA

int main() {
	
	char evli = ' '; // KARAKTER TANIMLAMA
	int cocuk = 0; // SAYÝ DEÐER TANIMLAMA
	printf("Evli Misiniz? (E/H?)\n"); // KULLANICIDAN DEÐER ALMA
	scanf("%c",&evli); // DEÐERÝ HAFIZADA TUTMA
	
	if(evli == 'E' || evli == 'e') { // EÐER KULLANICI "E" VEYA "e" YAZARSA
		printf("Kac cocugunuz var?\n"); // KULLANICIDAN DEÐER ALMA
		scanf("%d",&cocuk); // DEÐERÝ HAFIZADA TUTMA
	
	if(cocuk > 2) // EÐER cocuk > 2 BÜYÜKSE
		printf("\nBuyuk bir aileye sahipsiniz :)"); // EKRANA YAZDIRMA
	else // DEÐÝLSE
		printf("\nKucuk bir aileye sahipsiniz :)"); // EKRANA YAZDIRMA
	}
	else if(evli == 'H'|| evli == 'h') // DEÐÝLSE EÐER "H" VEYA "h" YAZARSA
		printf("Evli degilseniz. iyi günler :) \n"); // EKRANA YAZDIRMA
	else //DEÐÝLSE
		printf("HATA"); // EKRANA YAZDIRMA
		
	return 0;
}
