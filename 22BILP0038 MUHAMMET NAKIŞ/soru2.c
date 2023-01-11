// Bir sayi girilmesini isteyen ve girilen sayiyi ekrana yazdiran program.

#include <stdio.h> // KÜTÜPHANE TANIMLAMA 

main () {
	int sayi; // DEÐER TANIMLAMA 
	printf("Lutfen bir sayi giriniz : "); // KULLANICIDAN DEÐER GÝRME
	scanf("%d",&sayi);	// DEÐERÝ HAFIZADA TUTMA 
	
	printf("Girdiginiz sayi : %d",sayi); // SONUCU EKRANA YAZDIRMA 
}
