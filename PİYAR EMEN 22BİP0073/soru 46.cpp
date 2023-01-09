#include<stdio.h>
#include<string.h>

//Girilen cumle içerisinde kullanýcýnýn istediði karakterden kaç tane olduðunu bulan program.

main(){
	char kelime[20];
	char harf;
	int sayac, uzunluk;
	
	printf("Kelime giriniz: ");
	gets(kelime);
			
	printf("harf giriniz: ");
	scanf("%c", &harf);
	
	uzunluk = strlen(kelime);
	
	
	for(int i=0; i < uzunluk; i++){
		if(kelime[i] == harf){
			sayac++;
		}	
	}
	
	printf("%s kelimesi %d adet %c harfi iceriyor.", kelime, sayac, harf);
	
	
	
}
