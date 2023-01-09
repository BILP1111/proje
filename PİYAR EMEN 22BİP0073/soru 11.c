#include <stdio.h>
#include <math.h>

//Koordinatlarý verilen iki nokta arasýndaki mesafeyi bulan program.

main()
{
	double x1, y1, x2, y2, mesafe;
	
	printf("ilk noktanin x eksenindeki degerini giriniz...\n");
	scanf("%lf", &x1);
	
	printf("ilk noktanin y eksenindeki degerini giriniz...\n");
	scanf("%lf", &y1);
	
	printf("ikinci noktanin x eksenindeki degerini giriniz...\n");
	scanf("%lf", &x2);
	
	printf("ikinci noktanin y eksenindeki degerini giriniz...\n");
	scanf("%lf", &y2);
	
	mesafe = sqrt(((x2 - x1) * (x2 - x1)) + ((y2 - y1) * (y2 - y1)));
	
	printf("Noktalar arasi uzaklik = %lf", mesafe);

}
