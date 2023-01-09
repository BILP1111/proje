#include<stdio.h>

//Girilen bir sayýdaki rakamlarýn toplamýný bulan program.

main(){
	int sayi, toplam;
	
	printf("Bir sayi giriniz: ");
	scanf("%d", &sayi);
		
	while(sayi > 0){
		toplam += sayi%10;
		sayi /= 10;
	}
	
	printf("Girdiginiz sayinin rakamlari toplami: %d", toplam);
}
