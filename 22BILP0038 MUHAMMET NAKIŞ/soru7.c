// Kullanýcýdan gidilecek mesafe ve varýþ zamanýný sorarak almasý gereken hýzý hesaplayan program. 

#include <stdio.h> // KÜTÜPHANE TANIMLAMA

int main () {
	int mesafe,zaman,hiz; // DEÐER TANIMLAMA
	
	printf("Gidilecek mesafeyi giriniz (km) : "); // KULLANICIDAN DEÐER ALMA 
	scanf("%d",&mesafe); // DEÐERÝ HAFIZADA TUTMA
	
	printf("Gitmek istediginiz zamani yazin (s) : "); // KULLANICIDAN DEÐER ALMA
	scanf("%d",&zaman); // DEÐERÝ HAFIZADA TUTMA
	
	hiz = mesafe / zaman ; // HIZ FORMÜLÜ 
	
	printf("Istediginiz zamanda olmaniz icin gitmeniz gereken hiz :  %d",hiz); // SONUCU EKRANA YAZDIRMA
	
	return 0;
}
