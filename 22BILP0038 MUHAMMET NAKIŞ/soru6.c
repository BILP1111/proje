// Yarýçapý girilen dairenin alaný ve çevresini hesaplayan program.

#include <stdio.h> // KÜTÜPHANE TANIMLAMA
#include <math.h> // KÜTÜPHANE TANIMLAMA

int main () {
	int yaricap; // DEÐER TANIMLAMA 
	float pi=3.14,alan,cevre; // DEÐER TANIMLAMA
	
	printf("Yari Capi giriniz : "); // KULLANICIDAN DEÐER ALMA
	scanf("%d",&yaricap); // DEÐERÝ HAFIZADA TUTMA
	
	alan = pi* (pow(yaricap,2)); // DAÝRENÝN ALANININ FORMÜLÜ
	printf("Dairenin Alani : %f\n",alan); // DAÝRENÝN ALANININ SONUCUNU EKRANA YAZDIRMA
	
	cevre = 2 * pi * yaricap; // DAÝRENÝN ALANININ FORMÜLÜ
	printf("Dairenin Cevresi : %f",cevre); // DAÝRENÝN CEVRESÝNÝN SONUCUNU EKRANA YAZDIRMA
	
	return 0;
}
