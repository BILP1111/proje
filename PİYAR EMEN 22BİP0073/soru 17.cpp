#include<stdio.h>

//Girilen bir yaþa karþýlýk gelen hayat dilimini ekrana yazan program.

main(){
	int yas;
	
	printf("Yasi giriniz: ");
	scanf("%d", &yas);
	
	if(yas < 15){
		printf("Cocuk");
	}
	
	else if(yas < 30){
		printf("Genc");
	}
	
	else if(yas < 55){
		printf("Olgun");
	}
	
	else{
		printf("Yasli");
	}
}
