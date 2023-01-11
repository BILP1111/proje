// Kullanýcýdan iki sayi girmesini isteyen ve sayilarin büyüklüðünü karþýlaþtýran program.

#include <stdio.h> // KÜTÜPHANE TANIMLAMA

main () {
	float sayi1,sayi2; // DEÐER TANIMLAMA
	
	printf("1. Sayiyi giriniz : "); // KULLANICIDAN DEÐER ALMA
	scanf("%f",&sayi1); // DEÐERÝ HAFIZADA TUTMA
	
	printf("2. Sayiyi giriniz : "); // KULLANICIDAN DEÐER ALMA
	scanf("%f",&sayi2); // DEÐERÝ HAFIZADA TUTMA
	
	if(sayi1 > sayi2) // sayi1 sayi2'DEN BÜYÜK ÝSE
		printf("1. Sayi 2. Sayidan BUYUKTUR!"); // EKRANA YAZDIRMA
	else if(sayi2 > sayi1) // sayi2 sayi1'DEN BÜYÜK ÝSE
		printf("2. Sayi 1. Sayidan BUYUKTUR !"); // EKRANA YAZDIRMA
	else // DEÐÝL ÝSE
		printf("Sayilar birbirine ESSITTR!"); // EKRANA YAZDIRMA

}
