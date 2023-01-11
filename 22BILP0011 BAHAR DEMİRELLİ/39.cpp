#include <stdio.h>
#include <conio.h>

int main()
{
	int sayilar[10] = {3,7,14,41,57,36,21,84,45,95};		/* 10 tane sayi değeri tanımlanıyor */
	int sayac = 0;		/* değer tanımlanıyor */
	int sayi = 0;		/* değer tanımlanıyor */
	int asal;		/* değer tanımlanıyor */
	
	printf("Cift sayilar : ");		/* ekrana yazı yazdırılıyor */
	
	for(sayac = 0; sayac < 10 ; sayac++)			/* döngüye sokuluyor, sayac 0'a eşitleniyor, sayac 10`a kadar döngüde kalıyor, sayac +1 şeklinde artıyor */
	{	
		if(sayilar[sayac]%2 == 0)		/* eğer sayilar en büyük değerinin 2'ye bölümünden kalan 0 ise */
			printf("%i\t",sayilar[sayac]);		/* ekrana değer yazdırılıyor */
	}
		
	printf("\n\nTek sayilar : ");		/* ekrana yazı yazdırılıyor */
	
	for(sayac = 0; sayac < 10 ; sayac++)		/* döngüye sokuluyor, sayac 0'a eşitleniyor, sayac 10`a kadar döngüde kalıyor, sayac +1 şeklinde artıyor */
	{
		if(sayilar[sayac]%2 != 0)		/* eğer sayiların en büyük değerinin 2'ye bölümünden kalan 0 değilse */
			printf("%i\t",sayilar[sayac]);		/* ekrana değer yazdırılıyor */
	}
	
	printf("\n\nAsal sayilar : ");		/* ekrana yazı yazdırılıyor */
	
	for(sayac = 0;sayac < 10 ;sayac++)		/* döngüye sokuluyor, sayac 0'a eşitleniyor, sayac 10`a kadar döngüde kalıyor, sayac +1 şeklinde artıyor */
	{
		asal = 'E';		/* 	asal değerini  "E" değerine eşitliyoruz	*/
		
		for( sayi = 2; sayi < sayilar[sayac]; sayi++)		/* döngüye sokuluyor, sayı 2`ye eşitleniyor, sayı sayilairn en büyük değerine kadar döngüde kalıyor, sayı +1 şeklinde artıyor */
		{
			if(sayilar[sayac]%sayi == 0)
			{
				asal = 'H';		/* 	asal değerini  "H" değerine eşitliyoruz	*/
				break;
			}
		}
		if(asal == 'E')		/* eğer asal "E" ise */		
			printf("%i\t",sayilar[sayac]);		/* ekrana değer yazdırılıyor */
		
	}
	getch();
	
	
}