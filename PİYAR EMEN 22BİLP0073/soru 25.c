#include<stdio.h>

//Girilen bir sayý için çarpým tablosunu yazdýran program.

main(){
	int sayi;
	
	printf("Bir sayi giriniz: ");
	scanf("%d", &sayi);
	
	for(int i=1; i <= sayi; i++){
		printf("%d * %d = %d\n", sayi, i, sayi*i);
	}
}
