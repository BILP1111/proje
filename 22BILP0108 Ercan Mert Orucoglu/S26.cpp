//Girilen say�n�n fakt�riyelini hesaplayan program 
// 2 de�i�ken atad�k
//printf ile bir say� girilmkesini isteyip bu say�y� okuttuk.
// for ile fakt�riyel hesaplamas� yapt�k
// printf ile hesaplanan fakt�riyeli ekrana yazd�rd�k


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
