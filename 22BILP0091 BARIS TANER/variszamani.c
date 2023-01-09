#include <stdio.h>

int main() { // Kullanıcıdan gidilicek mesafe ve varış zamanını sorarak olması gereken hızı hesaplayan program
    int mesafe = 0;
	int zaman = 0;
	double hiz = 0;
	
	printf("Gidilecek mesafeyi giriniz (km): ");
	scanf("%d",&mesafe);
	
	printf("Varis zamani giriniz (saat): ");
	scanf("%d",&zaman);
	
	hiz = (double)mesafe / zaman;
	
	printf("Hiziniz :  %lf olmalidir.",hiz);
  return 0;
}