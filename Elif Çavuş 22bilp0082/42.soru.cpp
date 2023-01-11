#include <stdio.h>
#include <conio.h>

int main()
{

	int sayilar[5];
	int n = 0;
	int sayac = 0;
	int buyuk = 0;
	int kucuk = 0;
	int temp = 0;
	char siralama;
	char devami;
	
	do
	{
		for(n = 0 ; n < 5 ; n++ )
		{
		printf(" %i. sayi : ",n+1);
		scanf("%i",&sayilar[n]);
		fflush(stdin);
		}
		
		printf("\n\nSiralama (D-Duz | T-Ters) : \n\n");
		scanf("%c",&siralama);
		fflush(stdin);
		
		printf("\n\nSiralama oncesi. ");
		
		for(n=0 ; n < 5 ; n++)
		{
			printf(" %i -> ",sayilar[n]);
		}
		if( siralama == 'D' || siralama == 'd' )
		{
			for(buyuk=0; buyuk<4 ; buyuk++)
			{
				for(kucuk = buyuk + 1; kucuk < 5; kucuk++)
				{
					if(sayilar[buyuk] > sayilar[kucuk])
					{
						temp = sayilar[buyuk];
						sayilar[buyuk] = sayilar[kucuk];
						sayilar[kucuk] = temp;
					}
				}
			}
		}
	else if( siralama == 'T' || siralama == 't')
	{
		for( buyuk=0; buyuk<4; buyuk++)
		{
			for(kucuk = buyuk+1; kucuk<5; kucuk++)
			{
				if(sayilar[buyuk] < sayilar[kucuk])
				{
					temp = sayilar[buyuk];
					sayilar[buyuk] = sayilar[kucuk];
					sayilar[kucuk] = temp;
				}
			}
		}
	}
	else
	{
		printf("\n\nHatali siralama duzeni! ");

	}
	
	printf("\n\nSiralama sonrasi. ");
	
	for(n= 0 ; n < 5; n++)
	{
		printf(" %i -> ",sayilar[n]);
	}
	
	printf("\n\nTekrar siralama yapmak istiyor musunuz : ");
	devami = getchar();
	fflush(stdin);
	}
	while(devami == 'E' || devami == 'e');
}