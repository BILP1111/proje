#include<stdio.h>
#include <string.h>

//Girilen iki kelimeden hangisinin uzun olduðunu bulan program.

main(){
	char kelime1[20], kelime2[20];
	
	printf("ilk kelimeyi giriniz: ");
	gets(kelime1);
	
	printf("ikinci kelimeyi giriniz: ");
	gets(kelime2);
	
	if(strlen(kelime1) > strlen(kelime2)){
		printf("%s kelimesi %s kelimesinden daha uzun.", kelime1, kelime2);
	}
	
	else if(strlen(kelime2) > strlen(kelime1)){
		printf("%s kelimesi %s kelimesinden daha uzun.", kelime2, kelime1);
	}
	
	else{
		printf("%s kelimesi ile %s kelimesi ayni uzunlukta.", kelime1, kelime2);
	}
}
