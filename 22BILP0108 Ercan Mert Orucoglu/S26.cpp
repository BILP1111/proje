//Girilen sayýnýn faktöriyelini hesaplayan program 
// 2 deðiþken atadýk
//printf ile bir sayý girilmkesini isteyip bu sayýyý okuttuk.
// for ile faktöriyel hesaplamasý yaptýk
// printf ile hesaplanan faktöriyeli ekrana yazdýrdýk


#include<stdio.h>

void faktoriyel_hesapla(){
	int sayi, faktoriyel=1; 
	
	printf("Bir sayi giriniz: ");
	scanf("%d", &sayi);
	
	for(int i=2; sayi >= i; i++){
    	faktoriyel *= i;
}
	
	printf("%d faktoriyel = %d", sayi, faktoriyel);
}
main(){
	faktoriyel_hesapla();
}
