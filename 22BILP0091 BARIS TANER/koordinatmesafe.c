#include <stdio.h>
#include <math.h>

int main() { // Koordinatları verilen iki nokta arası mesafeyi bulan uygulama
    int x1 = 0, y1 = 0;
 	int x2 = 0, y2 = 0;
 	float mesafe = 0 ;

 	printf("\n 1. Nokta (X Y): ");
 	scanf("%d %d",&x1,&y1);
 	fflush(stdin);
 
 	printf("\n 2. Nokta (X Y): ");
 	scanf("%d %d",&x2,&y2);
 	fflush(stdin); // arabelleği temizlemek için fflush
 
 	mesafe = sqrt( pow( (y2-y1),2) + pow((x2-x1),2) ) ; // Karekökü hesaplamak için sqrt 
 	printf("\n Mesafe : %.2f",mesafe);
 
 	getch();
    return 0;
}