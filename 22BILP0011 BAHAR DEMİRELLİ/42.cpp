#include <stdio.h>
#include <conio.h>

int main()
{

	int sayilar[5];		/* sayı 5 tane olmak üzere sınırlı şekilde tanımlanıyor */
	int n = 0;		/* değer tanımlanıyor */
	int sayac = 0;		/* değer tanımlanıyor */
	int buyuk = 0;		/* değer tanımlanıyor */
	int kucuk = 0;		/* değer tanımlanıyor */
	int temp = 0;		/* değer tanımlanıyor */
	char siralama;		/* değer tanımlanıyor */
	char devami;		/* değer tanımlanıyor */
	
	do			/*	while döngüsünün tekrar başlayacağı yer */
	{
		for(n = 0 ; n < 5 ; n++ )		/* döngüye sokuluyor, n 0'a eşitleniyor, n 5'e kadar döngüde kalıyor, n +1 şeklinde artıyor */
		{
		printf(" %i. sayi : ",n+1);		/* ekrana değer ve yazı yazdırılıyor */
		scanf("%i",&sayilar[n]);		/* alınan değer yazdırılıyor */			
		fflush(stdin);		/* çıkış akışı */
		}
		
		printf("\n\nSiralama (D-Duz | T-Ters) : \n\n");		/* ekrana yazı yazdırılıyor */
		scanf("%c",&siralama);		/* alınan değer yazdırılıyor */
		fflush(stdin);		/* çıkış akışı */
		
		printf("\n\nSiralama oncesi. ");		/* ekrana yazı yazdırılıyor */
		
		for(n=0 ; n < 5 ; n++)		/* döngüye sokuluyor, n 0'a eşitleniyor, n 5'e kadar döngüde kalıyor, n +1 şeklinde artıyor */
		{
			printf(" %i -> ",sayilar[n]);		/* ekrana değer yazdırılıyor */
		}
		if( siralama == 'D' || siralama == 'd' )		/* eğer sıralama'ya "D" ve "d" yazılır ise */
		{
			for(buyuk=0; buyuk<4 ; buyuk++)		/* döngüye sokuluyor, büyük 0'a eşitleniyor, büyük 4'e kadar döngüde kalıyor, büyük +1 şeklinde artıyor */
			{
				for(kucuk = buyuk + 1; kucuk < 5; kucuk++)		/* döngüye sokuluyor, küçük büyük+1'e eşitleniyor, küçük 5'e kadar döngüde kalıyor, küçük +1 şeklinde artıyor */
				{
					if(sayilar[buyuk] > sayilar[kucuk])		/* eğer sayıların en büyük değeri sayıların en küçük değerinden büyük olursa */
					{
						temp = sayilar[buyuk];		/* temp'i sayiların en büyük değerine tanımlıyor */
						sayilar[buyuk] = sayilar[kucuk];		/* sayıların en büyük değerini saiların en küçük değerine tanımlıyor */
						sayilar[kucuk] = temp;		/* sayıların en küçük değerini temp'e tanımlıyor */
					}
				}
			}
		}
	else if( siralama == 'T' || siralama == 't')		/* eğer sıralama'ya "T" ve "t" yazılır ise */
	{
		for( buyuk=0; buyuk<4; buyuk++)			/* döngüye sokuluyor, büyük 0'a eşitleniyor, büyük 4'e kadar döngüde kalıyor, büyük +1 şeklinde artıyor */
		{
			for(kucuk = buyuk+1; kucuk<5; kucuk++)		/* döngüye sokuluyor, küçük büyük+1'e eşitleniyor, küçük 5'e kadar döngüde kalıyor, küçük +1 şeklinde artıyor */
			{
				if(sayilar[buyuk] < sayilar[kucuk])		/* eğer sayıların en büyük değeri sayıların en küçük değerinden büyük olursa */
				{
					temp = sayilar[buyuk];		/* temp'i sayiların en büyük değerine tanımlıyor */
					sayilar[buyuk] = sayilar[kucuk];		/* sayıların en büyük değerini saiların en küçük değerine tanımlıyor */
					sayilar[kucuk] = temp;			/* sayıların en küçük değerini temp'e tanımlıyor */
				}	
			}
		}
	}
	else		/* değilse */
	{
		printf("\n\nHatali siralama duzeni! ");		/* ekrana yazı yazdırılıyor */

	}
	
	printf("\n\nSiralama sonrasi. ");		/* ekrana yazı yazdırılıyor */
	
	for(n= 0 ; n < 5; n++)		/* döngüye sokuluyor, n 0'a eşitleniyor, n 5'e kadar döngüde kalıyor, n +1 şeklinde artıyor */
	{
		printf(" %i -> ",sayilar[n]);		/* ekrana değer yazdırılıyor */
	}
	
	printf("\n\nTekrar siralama yapmak istiyor musunuz : ");		/* ekrana yazı yazdırılıyor */
	devami = getchar();		/* klavyeden okunan değeri char değerine atar */
	fflush(stdin);			/* çıkış akışı */
	}
	while(devami == 'E' || devami == 'e');			/* koşul tanımlıyoruz , devam sorusuna "E" veya "e" yazarsak programı tekrar başlatıyor */				
}