#include <stdio.h>

//Girilen yýlýn artýk yýl olup olmadýðýný tespit eden program.

main()
{
	int yil;
	
	printf("Yil giriniz: ");
	scanf("%d", &yil);
	
	if(yil % 400 == 0) {
		printf("Girdiginiz yil, artik yildir.");
	}
	
	else {
		printf("Girdiginiz yil, artik yil degildir.");
	}
}
