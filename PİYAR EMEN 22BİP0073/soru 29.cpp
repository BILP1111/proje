#include<stdio.h>

//* karakteri ile piramit olusturan program.

main(){
	int satir_sayisi;
	
	printf("Satir sayisini giriniz: ");
	scanf("%d", &satir_sayisi);
	
	for(int i=1; i <= satir_sayisi; i++){
		for(int a=1; a <= i; a++){
			printf("*");
		}
		printf("\n");
	}
}
