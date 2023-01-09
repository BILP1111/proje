#include<stdio.h>

//Kullanýcý negatif bir sayý girinceye kadar kullanýcýdan bir sayý girmesini isteyen ve girilen sayýyý ekrana yazdýran program.

main(){
	int sayi;
	
	while(sayi >= 0){
		printf("Bir sayi giriniz: ");
		scanf("%d", &sayi);
		
		if(sayi < 0){
			printf("Negatif sayi (%d) girdiniz.\n", sayi);
		}
		
		else if(sayi == 0){
			printf("Girdiginiz sayi: 0\n");
		}
		
		else{
			printf("Pozitif sayi (%d) girdiniz.\n", sayi);
		}
	}
}
