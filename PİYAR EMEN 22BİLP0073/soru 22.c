#include<stdio.h>

//Girilen bir sayýnýn asal sayý olup olmadýðýný bulan program.

main(){
	int sayi, sayac = 0;
	
	printf("Sayi giriniz: ");
	scanf("%d", &sayi);
	
	if(sayi < 2){
		printf("Sayi asal degil.");
	}
	
	else if(sayi == 2){
		printf("Sayi asal.");
	}
	
	else if(sayi > 2){
		for(int i=2; sayi > i; i++){
			if(sayi%i == 0){
				sayac++;
			}
		}
		
		if(sayac == 0){
			printf("Sayi asal.");
		}
		
		else{
			printf("Sayi asal degil.");
		}
		
	}
}
