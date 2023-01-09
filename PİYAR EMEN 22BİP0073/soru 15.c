#include<stdio.h>

//Klavyeden girilen harfin sesli harf olup olmadýðýný kontrol eden program.

main(){
	char harf;
	
	printf("Bir harf giriniz: ");
	scanf("%s", &harf);
	
	if(harf == 'a' || harf == 'e' || harf == 'ý' || harf == 'i' || harf == 'o' || harf == 'ö' || harf == 'u' || harf == 'ü'){
		printf("Girdiginiz harf seslidir.");
	}
	
	else{
		printf("Girdiginiz harf sessizdir.");
	}
}
