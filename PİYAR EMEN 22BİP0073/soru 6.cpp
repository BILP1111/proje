#include <stdio.h>

//Yarýçapý girilen dairenin alanýný ve çevresini bulan program.

main()
{
	float yaricap;
	
	printf("Yaricapi giriniz: ");
	scanf("%f", &yaricap);
	
	printf("Cevre = %.2f", 2 * 3.14 * yaricap);
	printf("\nAlan = %.2f", 3.14 * yaricap * yaricap);
}
