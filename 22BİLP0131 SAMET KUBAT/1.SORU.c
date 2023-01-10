#include <stdio.h>
int main(){
	
	int yil;
	printf("Bir yil giriniz: ");
	scanf("%d",&yil);
	
	if(yil%4 == 0){
		printf("Girdiginiz yil artik yildir.");
	}
	else{
		printf("Girdiginiz yil artik yil degildir.");
	}
}

//Kullanýcýdan bir yýl girmesini ister ve girdiðin yýl olup olmadýðýný  çýkarýr.//
