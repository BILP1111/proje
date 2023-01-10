#include <stdio.h>
int main(){
	
	int notu;
	printf("Notunuzu giriniz: ");
	scanf("%d",&notu);
	
	if(notu >= 90){
		printf("Notunuz : A+");
	}
	else if(notu >= 85){
		printf("Notunuz : A");
		
	}
	else if(notu >= 75){
		printf("Notunuz : B+");
		
	}
	else if(notu >= 70){
		printf("Notunuz : B");
		
	}
	else if(notu >= 50){
		printf("Notunuz : C");
	}
	else 
		printf("Gecer not alamadiniz.");

}
	///kullanýcýdan girilen nota göre if else döngüsüyle aldýðý notu gösterdik ve ona göre gecer not aliýp almadýðýný ekrana yazdýrdý.\\
