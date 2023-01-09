#include <stdio.h>

//Kullanýcýdan iki sayi girmesini isteyen ve sayýlarýn büyüklüðünü karþýlaþtýran program.

main()
{
	int sayi1, sayi2;
	
	printf("ilk sayiyi giriniz...\n");
	scanf("%d", &sayi1);
	
	printf("ikinci sayiyi giriniz...\n");
	scanf("%d", &sayi2);
	
	if(sayi1 > sayi2)
	{
		printf("%d > %d", sayi1, sayi2);
	}
	
	else
	{
		printf("%d > %d", sayi2, sayi1);
	}
}
