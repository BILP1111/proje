// Bir kenarý girilen alaný ve çevresini hesaplayan program.

#include <stdio.h> // KÜTÜPHANE TANIMLAMA

int main () {
	int kenar,alan,cevre; // DEÐER TANIMLAMA
	printf("Karenin bir kenar uzunlugunu giriniz : "); // KULLANICIDAN DEÐER ALMA
	scanf("%d",&kenar); // DEÐERÝ HAFIZADA TUTMA
	
	alan = kenar * kenar; // KARENÝN ALAN FORMÜLÜ
	cevre = kenar * 4; // KARENÝN CEVRE FORMULÜ 
	
	printf("Karenin Alani : %d\n",alan); // KARENÝN ALANININ SONUCUNU EKRANA YAZDIRMA
	printf("Karenin Cevresi :  %d",cevre); // KARENÝN CEVRESÝNÝN SONUCUNU EKRANA YAZDIRMA
	
	return 0;
}
