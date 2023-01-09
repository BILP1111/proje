#include<stdio.h>
#include <string.h>

//Ayrý ayrý girilen adý ve soyadý bilgilerini birleþtirerek tam adýný gösteren program.

main(){
	char ad[10], soyad[10];
	
	printf("Adinizi giriniz: ");
	gets(ad);
	strcat(ad, " ");
	
	printf("Soyadinizi giriniz: ");
	gets(soyad);
	
	printf("Adiniz Soyadiniz: %s", strcat(ad, soyad));
}
