#include <stdio.h>
#include <conio.h>

int main()
{
	int sayilar[5];
	int buyuk = 0;
	int kucuk = 0;
	int sayac = 0;
	int temp = 0;
	
	for(sayac = 0; sayac < 5 ;sayac++)
	
	{
		printf("%i. sayi : ",sayac+1);
		scanf("%i",&sayilar[sayac]);
	}
	printf("\n\nGirilen sayiler : ");
	
	for(sayac = 0 ; sayac < 5; sayac++)
	{	
		printf("\t %i",sayilar[sayac]);
	}
	
	for( buyuk = 0; buyuk < 4; buyuk++)
	{
		for( kucuk = buyuk+1; kucuk < 5; kucuk++)
		{
			if( sayilar[buyuk] > sayilar[kucuk])
			{
				temp = sayilar[buyuk];
				sayilar[buyuk] = sayilar[kucuk];
				sayilar[kucuk] = temp;
			}
		}
	}
	printf("\n\nKucuktan buyuge siralanmasi : ");
	
	for(sayac = 0 ;sayac < 5; sayac++)
	{
		printf("\t%i",sayilar[sayac]);
	}
	
	return 0;
}