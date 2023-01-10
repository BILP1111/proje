#include <stdio.h>
///girilen bir yaþa karþýlýk gelen hayat dilimini gösteren program soru 17
int main(){
	int yas;
	
	printf("Yasinizi giriniz : ");
	scanf("%d",&yas);
	
	if(yas<=5){
		printf("Bebeksiniz.");
	}
	else if(yas<=17){
		printf("Cocuksunuz.");
	}
	else if(yas<=30){
		printf("Gencsiniz.");
	}
	else if(yas<=45){
		printf("Orta yasliniz.");
	}
	else if(yas<=119){
		printf("Yasliniz.");
	}
	else{
		printf("Yanlis giris yaptiniz.");
	}
	
}

///kullanýcýdan girilen yaþa göre if else döngüsü kullanýlarak yaþlýlýk dönemini bulduk\\
