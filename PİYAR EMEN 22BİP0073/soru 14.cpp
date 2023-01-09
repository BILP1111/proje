#include<stdio.h>

//Girilen bir nota karþýlýk gelen durumu yazdýran program.

main(){
	float not1;
	printf("Notunuzu giriniz: ");
	scanf("%f", &not1);
	
	if(not1 >= 50){
		printf("Dersi gectiniz.");
	}
	
	else{
		printf("Dersten kaldiniz.");
	}
}
