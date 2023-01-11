// Girilen bir sayinin tek veya çift sayi olduðunu bulan program.

#include <stdio.h> // KÜTÜPHANE TANIMLAMA

int main() {
	int sayi; // DEÐER TANIMLAMA
	
	printf("Bir sayi giriniz :"); // KULLANICIDAN DEÐER ALMA
	scanf("%d",&sayi); // DEÐERÝ HAFIZADA TUTMA
	
	if(sayi % 2 == 0 ) // SAYÝ EÐER 2 YE TAM BÖLÜNÜYORSA
		printf("Girdiginiz sayi CIFTTIR! : %d",sayi); // EKRANA YAZDIRMA 
	
	else // DEÐÝLSE
		printf("Girdiginiz sayi TEKTIR! : %d",sayi); // EKRANA YAZDIRMA
		
	return 0;
}
