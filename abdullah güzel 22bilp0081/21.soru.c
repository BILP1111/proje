/* Kullan�c�ya medeni halini, evli ise ka� �ocugu oldugunu soran ve gerekli mesaji veren program */

#include <stdio.h>

int main(void){
	int cocuk;
	int medeni;
	
	printf("Medeni halini gir (E=evli, B=bekar): ");
	scanf("%c", &medeni);
	
	if(medeni=='E'){
		printf("Kac cocugun var:");
		scanf("%d",&cocuk);
		printf("Evli ve %d cocuklusun.\n", cocuk);
	} else if(medeni=='B'){
		printf("Bekars�n.\n");
	}else{
	printf("Medeni durumu yok.\n");
	}
	return 0;
	
}
