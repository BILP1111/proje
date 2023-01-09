#include<stdio.h>

//Basit dört iþlem ve modüler aritmetik iþlemi yapabilen program.

main(){
	int sayi1, sayi2, islem;
	
	printf("ilk sayiyi giriniz: ");
	scanf("%d", &sayi1);
	
	printf("ikinci sayiyi giriniz: ");
	scanf("%d", &sayi2);
	
	printf("1. Toplama\n2. Cikarma\n3. Carpma\n4. Bolme\nYapmak istediginiz islemi seciniz: ");
	scanf("%d", &islem);
	
	if(islem == 1){
		printf("Toplam = %d", sayi1 + sayi2);
	}
	
	else if(islem == 2){
		printf("Fark = %d", sayi1 - sayi2);
	}
	
	else if(islem == 3){
		printf("Carpim = %d", sayi1 * sayi2);
	}
	
	else if(islem == 4){
		printf("Bolum = %.2f", (float)sayi1 / (float)sayi2);
	}
	
}
