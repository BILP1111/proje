#include<stdio.h>

//Girilen bir sayýnýn "mükemmel sayi" olup olmadýðýný bulan program.

main(){
	int sayi, toplam;
	
	printf("Bir sayi giriniz: ");
	scanf("%d", &sayi);
	
	for(int i=1; i < sayi; i++){
		if(sayi%i == 0){
			toplam += i;
		}
	}
	
	if(toplam == sayi){
		printf("%d mukemmel sayidir.", sayi);
	}
	
	else{
		printf("%d mukemmel sayi degildir.", sayi);
	}
}
