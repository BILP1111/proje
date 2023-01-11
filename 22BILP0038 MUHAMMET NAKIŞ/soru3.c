// Kullanýcýdan iki sayi girmesini isteyen ve bu iki sayinin toplamlarini ekrana yazdýran program.

#include <stdio.h> // KÜTÜPHANE TANIMLAMA

main () {
	int sayi1, sayi2,toplam; // DEÐER TANIMLAMA
	
	printf("1. sayi giriniz : "); // KULLANICIDAN DEÐER ALMA
	scanf("%d",&sayi1); // DEÐERÝ HAFIZADA TUTMA
	
	printf("2. sayi giriniz : "); // KULLANICIDAN DEÐER ALMA 
	scanf("%d",&sayi2);	// DEÐERÝ HAFIZADA TUTMA
	
	toplam = sayi1 + sayi2; // TOPLAMA ÝÞLEMÝ 
	
	printf("Toplam : %d",toplam); // SONUCU EKRANA YAZDIRMA
}
