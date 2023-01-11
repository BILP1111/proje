#include <stdio.h> // KÜTÜPHANE TANIMLAMA

int main() {
	
	float sayi1,sayi2,bolme; // ONDALIKLI DEĞER TANIMLAMA
	int toplama,cikarma,carpma; // DEĞER TANIMLAMA
	
	printf("1. Sayiyi Giriniz : "); // KULLANICIDAN DEĞER ALMA
	scanf("%f",&sayi1); // DEĞERİ HAFIZADA TUTMA
	
	printf("2. Sayiyi Giriniz : "); // KULLANICIDAN DEĞER ALMA
	scanf("%f",&sayi2); // DEĞERİ HAFIZADA TUTMA 
	
	toplama = sayi1+sayi2; // TOPLAMA İŞLEMİ
	printf("Toplam: %d \n",toplama); // SONUCU EKRANA YAZDIRMA
	
	cikarma = sayi1-sayi2; // ÇIKARMA İŞLEMİ
	printf("Cikarma: %d \n",cikarma); // SONUCU EKRANA YAZDIRMA
	
	carpma = sayi1*sayi2; // ÇARPMA İŞLEMİ
	printf("Carpma: %d \n",carpma); // SONUCU EKRANA YAZDIRMA
	
	bolme = sayi1/sayi2; // BÖLME İŞLEMİ
	printf("Bolme: %f \n",bolme); // SONUCU EKRANA YAZDIRMA
	
	return 0;
}
