#include <stdio.h>

//Kullanýcýdan gidilecek mesafe ve varýþ zamanýný sorarak olmasý gereken hýzý hesaplayan program.

main()
{
	float mesafe, saat, dakika, zaman, hiz;
	
	printf("Mesafeyi km olarak giriniz...\n");
	scanf("%f", &mesafe);
	
	printf("Sureyi saat olarak giriniz...\n");
	printf("Saat: ");
	scanf("%f", &saat);
	printf("Dakika: ");
	scanf("%f", &dakika);
	
	// Dakikayý da saate çeviriyoruz.
	zaman = saat + (dakika / 60);
		
	printf("Hiziniz saatte ortalama %.2f olmali.", mesafe / zaman);
}
