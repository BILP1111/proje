// Kullanýcýdan yaþýný sorarak ay,hafta,gun,saat,dakika ve saniye olarak hesaplayan program.

#include <stdio.h> // KÜTÜPHANE TANIMLAMA

int main() {
	int yas,ay,hafta,gun,saat,dakika,saniye; // DEÐER TANIMLAMA
	
	printf("Yasinizi giriniz : "); // KULLANICIDAN DEÐER ALMA
	scanf("%d",&yas); // DEÐERÝ HAFIZADA TUTMA
	
	ay = yas * 12; // AY HESAPLAMA
	hafta = yas * 7; // HAFTA HESAPLAMA
	gun = yas * 365; // GÜN HESAPLAMA
	saat = yas * 365 * 24; // SAAT HESAPLAMA
	dakika = yas * 365 * 24 * 60; // DAKÝKA HESAPLAMA
	saniye = yas * 365 * 24 * 60 * 60; // SANÝYE HESAPLAMA
	
	printf("Ay : %d\n",ay); // AY SONUCUNU EKRANA YAZDIRMA
	printf("Hafta : %d\n",hafta); // HAFTA SONUCUNU EKRANA YAZDIRMA
	printf("Saat : %d\n",saat); // SAAT SONUCUNU EKRANA YAZDIRMA 
	printf("Dakika  : %d\n",dakika); // DAKÝKA SONUCUNU EKRANA YAZDIRMA
	printf("Saniye  : %d\n",saniye); // SANÝYE SONUCUNU EKRANA YAZDIRMA
	printf("Gun  : %d",gun); // GÜN SONUCUNU EKRANA YAZDIRMA
	
	return 0;
}
