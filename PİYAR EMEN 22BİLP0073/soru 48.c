#include<stdio.h>

//Girilen bir sayýnýn fonksiyon kullanarak çarpým tablosunu yazdýran program.

void carpim_tablosu(){
	int sayi;
	
	printf("Bir sayi giriniz: ");
	scanf("%d", &sayi);
	
	for(int i=1; i <= sayi; i++){
		printf("%d * %d = %d\n", sayi, i, sayi*i);
	}
}

main(){
	carpim_tablosu();
}
