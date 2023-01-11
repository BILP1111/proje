#include <stdio.h>

int main()
{
	int yas;
	printf("...DENK GELINEN HAYAT DONEMI...");
	printf("\n\nKontrol etmek istediginiz donemi giriniz.\n\n");
	scanf("%d", &yas);
	
	if(yas >=1 && yas<=6)
	 printf("İlk cocukluk donemi.");
	else if (yas >=6 && yas <=12)
	 printf("Cocukluk donemi");
	else if (yas >=12 && yas <=18)
	 printf("Ergenlik donemi");
	else if (yas>=18 && yas <=150)
	 printf("Yetiskin");
	else 
	 printf("Gecerli bir yas giriniz\n");
	 return 0;
	}