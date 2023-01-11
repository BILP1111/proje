// iki kenarý girilen dikdörtgenin karesi ve çevresini bulan program.

#include <stdio.h> // KÜTÜPHANE TANILAMA

main () {
	int kisakenar,uzunkenar,alan,cevre; // DEÐER TANIMLAMA 
	
	printf("Kisa kenari giriniz : "); // KULLANICIDAN DEÐER ALMA
	scanf("%d",&kisakenar); // DEÐERÝ HAFIZADA TUTMA
	
	printf("Uzun kenari giriniz : "); // KULLANICIDAN DEÐER ALMA
	scanf("%d",&uzunkenar); // DEÐERÝ HAFIZADA TUTMA
	
	alan = kisakenar * uzunkenar; // DÝKDÖRTGENNÝN ALAN FORMÜLÜ
	cevre = 2 * (kisakenar + uzunkenar); // DÝKDÖRTGENÝN CEVRE FORMÜLÜ
	
	printf("Dikdortgenin Alani : %d\n",alan); // DÝKDÖRTGENÝN ALANININ SONUCUNU EKRANA YAZDIRMA
	printf("Dikdortgenin Cevresi : %d",cevre); // DÝKDÖRTGENÝN CEVRESÝNÝN SONUCUNU EKRANA YAZDIRMA
}
