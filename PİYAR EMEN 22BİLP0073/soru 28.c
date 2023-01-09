#include<stdio.h>

//Girilen iki sayý arasýnda bulunan asal sayýlarý listeleyen program.

main(){
	int sayi1, sayi2, sayac;
	
	printf("ilk sayiyi giriniz: ");
	scanf("%d", &sayi1);
	
	printf("ikinci sayiyi giriniz: ");
	scanf("%d", &sayi2);
	
	for(int a=sayi1; a <= sayi2; a++){
		sayac=0;
		for(int i=2; i < a; i++){
			if(a%i == 0){
				sayac++;
			}
		}
		
		if(sayac == 0){
			printf("%d\n", a);
		}	
	}	
}
