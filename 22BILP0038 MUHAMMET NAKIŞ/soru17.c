// Girilen bir yaþa karþýlýk gelen hayat dilimini ekrana veren program.

#include <stdio.h> // KÜTÜPHANE TANIMLAMA

int main() {
	int yas = 0 ; // DEÐER TANIMLAMA
	
	printf("Yasinizi Giriniz : "); // KULLANICIDAN DEÐER ALMA
	scanf("%d",&yas); // DEÐERÝ HAFIZADA TUTMA
	
  	if( yas >= 1 && yas <= 4) // EÐER yas >= 1 VE yas <= 4 ÝSE
 	 	printf("Bebeklik Donemi\n"); // SONUCU EKRANA YAZDIRMA
 	else if( yas > 4 && yas <= 14 ) // DEÐÝLSE EÐER yas > 4 VE yas <= 14 
  		printf(" Ilkogretim Donemi\n"); // SONUUCU EKRANA YAZDIRMA
 	else if( yas > 14 && yas <= 21 ) // DEÐÝLSE EÐER yas > 14 VE yas <= 21 ÝSE
  		printf(" Yuksek Ogretim Donemi\n"); // SONUCU EKRANA YAZDIRMA
 	else if( yas > 21 && yas <= 60 ) // DEÐÝLSE EÐER yas > 21 VE yas <= 60 
  		printf("Is Hayati\n"); // SONUCU EKRANA YAZDIRMA
 	else if( yas > 60 ) // DEÐÝLSE EÐER yas > 60
  		printf("Emeklilik Donemi\n"); // EKRANA YAZDIRMA
 	else // DEÐÝLSE
  		printf("\n Gecersiz Yas..."); // EKRANA YAZDIRMA
  		
  	return 0;
}
