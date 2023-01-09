#include <stdio.h>

//Bir kenarý girilen karenin alaný ve çevresini hesaplayan program.

main()
{
	int kenar;
	
	printf("Karenin kenar uzunlugunu giriniz...\n");
	scanf("%d", &kenar);
		
	printf("Cevre = %d", kenar * 4);
	printf("\nAlan = %d", kenar * kenar);
	
	// ya da
	/*
	int kenar, cevre, alan;
	
	printf("Karenin kenar uzunlugunu giriniz...\n");
	scanf("%d", &kenar);
	
	cevre = kenar * 4;
	alan = kenar * kenar;
		
	printf("Cevre = %d", cevre);
	printf("\nAlan = %d", alan);
	*/
}
