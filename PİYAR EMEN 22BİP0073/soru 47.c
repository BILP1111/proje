#include<stdio.h>

//Kullanýcý tarafýndan girilen bir sayýnýn asal olup olmadýðýný fonksiyon kullanarak hesaplayan program.

void asal_sayi(){
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

main(){
	asal_sayi();
}
