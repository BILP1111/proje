// Basit dört iþlem ve modüller aritmetik iþlemini yapabilen program.

#include <stdio.h> // KÜTÜPHANE TANIMLAMA

int main() {
	
	float sayi1,sayi2,bolme; // ONDALIKLI DEÐER TANIMLAMA
	int toplama,cikarma,carpma; // DEÐER TANIMLAMA
	
	printf("1. Sayiyi Giriniz : "); // KULLANICIDAN DEÐER ALMA
	scanf("%f",&sayi1); // DEÐERÝ HAFIZADA TUTMA
	
	printf("2. Sayiyi Giriniz : "); // KULLANICIDAN DEÐER ALMA
	scanf("%f",&sayi2); // DEÐERÝ HAFIZADA TUTMA 
	
	toplama = sayi1+sayi2; // TOPLAMA ÝÞLEMÝ
	printf("Toplam: %d \n",toplama); // SONUCU EKRANA YAZDIRMA
	
	cikarma = sayi1-sayi2; // ÇIKARMA ÝÞLEMÝ
	printf("Cikarma: %d \n",cikarma); // SONUCU EKRANA YAZDIRMA
	
	carpma = sayi1*sayi2; // ÇARPMA ÝÞLEMÝ
	printf("Carpma: %d \n",carpma); // SONUCU EKRANA YAZDIRMA
	
	bolme = sayi1/sayi2; // BÖLME ÝÞLEMÝ
	printf("Bolme: %f \n",bolme); // SONUCU EKRANA YAZDIRMA
	
	return 0;
}
