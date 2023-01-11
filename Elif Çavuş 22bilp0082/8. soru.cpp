#include <stdio.h>
int main()
{
	int yas = 0;
	int ay = 0;
	int hafta = 0;
	long int gun = 0;
	long int saat = 0;
	long int dakika = 0;
	long int saniye = 0;
	
	
	printf("Yasiniz Kac? ");
	scanf("%i",&yas);
	
	ay = (int) yas * 12;
	hafta = (int) yas * 52;
	gun = (long int) yas * 365;
	saat = (long int) yas * 365 * 24;
	dakika = (long int) yas * 365 * 24 * 60;
	saniye = (long int) yas * 365 * 24 * 60 * 60;
	
	printf("\n Yasiniz %i olduguna gore :", yas);
	printf("\n%10d ay", ay);
	printf("\n%10d hafta", hafta);
	printf("\n%101d gun", gun);
	printf("\n%101d saat", dakika);
	printf("\n%101d dakika", dakika);
	printf("\n%101i saniye", saniye);
	printf("\nyasamissiniz.");
	
	return 0;
}