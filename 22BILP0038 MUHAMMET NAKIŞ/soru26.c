// girilen bir sayinin faktoriyelini hesaplayan program

#include <stdio.h> // KÜTÜPHANE TANIMLAMA

int main() {
	
	int sayi,n, sonuc=1; // SAYISAL DEÐÝÞKEN OLARAK sayi, n ve sonuc DEÐERÝ TANIMLIYORUZ sonuc DEÐERÝNÝ 1 E EÞÝTLÝYORUZ
	
	printf("Bir sayi giriniz: \n"); // KULLANICIDAN DEÐER ALIYORUZ
	scanf("%d",&sayi); // DEÐERÝ HAFIZADA TUTUYORUZ
	
	for(n = 1; n <= sayi; n++) { // DÖNGÜ AÇIYORUZ n DEÐERÝNÝ 1 E EÞÝTLÝYORUZ n DEÐERÝ sayi DEÐERÝNDEN KÜÇÜK VE EÞÝT OLANA KADAR n DEÐERÝNE 1 ARTTIRIYORUZ
		sonuc = sonuc * n; // sonuc DEÐERÝNÝ sonuc * n ÇARPTIKTAN SONRA
	}
	
	printf("\n %d = %d ",sayi,sonuc); // sayi VE sonuc DEÐERLERÝNÝ EKRANA GETÝRÝYORUZ %d Komutu ile
	return 0;
}
