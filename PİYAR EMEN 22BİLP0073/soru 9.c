#include <stdio.h>

//Girilen bir sayýnýn tek veya çift sayý olduðunu bulan program.

main()
{
	int sayi;
	
	printf("Bir sayi giriniz...\n");
	scanf("%d", &sayi);
	
	if(sayi %2 == 1)
	{
		printf("Girdiginiz sayi tektir.");
	}
	
	else
	{
		printf("Girdiginiz sayi cifttir.");
	}
}
