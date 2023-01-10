#include <stdio.h>
/// Basit dört iþlem ve moduler aritmetik iþlem yapabilen program soru 18
int main(){
	
	float bolme;
	int sayi1,sayi2,secim,toplama,cikarma,carpma;
	
	printf("1.sayiyi giriniz: ");
	scanf("%d",&sayi1);
	printf("2.sayiyi giriniz: ");
	scanf("%d",&sayi2);
	
	printf("\nToplama islemi icin 1'e basiniz.\n");
	printf("\nCikarma islemi icin 2'ye basiniz.\n");
	printf("\nCarpma islemi icin 3'e basiniz.\n");
	printf("\nBolme islemi icin 4'e basiniz.\n");
	scanf("%d",&secim);
	
	if(secim==1){
		toplama=sayi1+sayi2;
		printf("Sayilarin toplami= %d.",toplama);
	}
	else if(secim==2){
		cikarma=sayi1-sayi2;
		printf("Sayilarin farki= %d.",cikarma);
	}
	else if(secim==3){
		carpma=sayi1*sayi2;
		printf("Sayilarin carpimi= %d.",carpma);
	}
	else if(secim==4){
		bolme=sayi1/sayi2;
		printf("sayilarin bolumu= %f.",bolme);
	}
	else{
		printf("Yanlis secim yaptiniz.");
		
	}
	///kullanýcýdan 2 sayi girmesini istedik girdiði sayiya göre yapabileceði iþlemleri listeledik ve 
	///verdiði seçime göre if else döngülerinin içinde iþlemleri tanýmlayarak 4 iþlemi yapabilmesini saðladýk.
}
