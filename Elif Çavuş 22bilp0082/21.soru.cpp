#include <stdio.h> // KÜTÜPHANE TANIMLAMA

int main() {
	
	char evli = ' '; // KARAKTER TANIMLAMA
	int cocuk = 0; // SAYİ DEĞER TANIMLAMA
	printf("Evli Misiniz? (E/H?)\n"); // KULLANICIDAN DEĞER ALMA
	scanf("%c",&evli); // DEĞERİ HAFIZADA TUTMA
	
	if(evli == 'E' || evli == 'e') { // EĞER KULLANICI "E" VEYA "e" YAZARSA
		printf("Kac cocugunuz var?\n"); // KULLANICIDAN DEĞER ALMA
		scanf("%d",&cocuk); // DEĞERİ HAFIZADA TUTMA
	
	if(cocuk > 2) // EĞER cocuk > 2 BÜYÜKSE
		printf("\nBuyuk bir aileye sahipsiniz "); // EKRANA YAZDIRMA
	else // DEĞİLSE
		printf("\nKucuk bir aileye sahipsiniz "); // EKRANA YAZDIRMA
	}
	else if(evli == 'H'|| evli == 'h') // DEĞİLSE EĞER "H" VEYA "h" YAZARSA
		printf("Evli degilsiniz. iyi günler  \n"); // EKRANA YAZDIRMA
	else //DEĞİLSE
		printf("HATA"); // EKRANA YAZDIRMA
		
	return 0;
}
