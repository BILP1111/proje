#include<stdio.h>

//Haftanýn gün numarasýna karþýlýk gelen gün adýný veren program.

main(){
	int gun_no;
	
	printf("Gun numarasi giriniz: ");
	scanf("%d", &gun_no);
	
	if(gun_no == 1){
		printf("Pazartesi");
	}
	
	else if(gun_no == 2){
		printf("Sali");
	}
	
	else if(gun_no == 3){
		printf("Carsamba");
	}
	
	else if(gun_no == 4){
		printf("Persembe");
	}
	
	else if(gun_no == 5){
		printf("Cuma");
	}
	
	else if(gun_no == 6){
		printf("Cumartesi");
	}
	
	else {
		printf("Pazar");
	}
}
