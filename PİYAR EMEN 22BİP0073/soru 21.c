#include<stdio.h>

//Kullanýcýya medeni halini, evli ise kaç çocuðu olduðunu soran ve gerekli mesajý veren program.

main(){
	int medenihal, cocuksayisi;
	
	printf("1. Evli\n2. Bekar\nMedeni halinizi seciniz: ");
	scanf("%d", &medenihal);
	
	printf("Kac cocugunuz var? ");
	scanf("%d", &cocuksayisi);
	
	if(medenihal == 1 && cocuksayisi > 0){
		printf("Evlisiniz ve %d cocugunuz var.", cocuksayisi);
	}
	
	else if(medenihal == 1 && cocuksayisi == 0){
		printf("Evlisiniz ve cocugunuz yok.");
	}
	
	else if(medenihal == 2 && cocuksayisi > 0){
		printf("Bekarsiniz ve %d cocugunuz var.", cocuksayisi);
	}
	
	else if(medenihal == 2 && cocuksayisi == 0){
		printf("Bekarsiniz ve cocugunuz yok.");
	}
}
