#include<stdio.h>

//Girilen bir sayının faktöriyelini hesaplayan program.

main(){
	int sayi, faktoriyel=1;
	
	printf("Bir sayi giriniz: ");
	scanf("%d", &sayi);
	
	for(int i=2; sayi >= i; i++){
		faktoriyel *= i;
	}
	
	printf("%d faktoriyel = %d", sayi, faktoriyel);
}
