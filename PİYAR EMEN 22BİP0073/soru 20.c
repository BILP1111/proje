#include<stdio.h>

//“Bir üçgenin girilen üç kenarýna göre üçgen türünü bulan program.

main(){
	int kenar1, kenar2, kenar3;
	
	printf("Birinci kenarin uzunlugunu giriniz: ");
	scanf("%d", &kenar1);
	
	printf("ikinci kenarin uzunlugunu giriniz: ");
	scanf("%d", &kenar2);
	
	printf("Ucuncu kenarin uzunlugunu giriniz: ");
	scanf("%d", &kenar3);
	
	if(kenar1 == kenar2 && kenar2 == kenar3 && kenar1 == kenar3){
		printf("Bu bir eskenar ucgendir.");
	}
	
	else if(kenar1 != kenar2 && kenar2 != kenar3 && kenar1 != kenar3){
		printf("Bu bir cesitkenar ucgendir.");
	}
	
	else{
		printf("Bu bir ikizkenar ucgendir.");
	}
}
