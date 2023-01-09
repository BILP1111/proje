#include <stdio.h>

//Yarýçapý verilen dairenin alanýný ve çevresini fonksiyon kullanarak hesaplayan program.

void hesapla(){
	float yaricap;
	
	printf("Yaricapi giriniz: ");
	scanf("%f", &yaricap);
	
	printf("Cevre = %.2f", 2 * 3.14 * yaricap);
	printf("\nAlan = %.2f", 3.14 * yaricap * yaricap);
}

main()
{
	hesapla();
}
