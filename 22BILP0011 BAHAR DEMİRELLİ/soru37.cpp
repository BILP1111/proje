#include<stdio.h>
#include<conio.h>

int main()
{
	int sayilar[10];
	int sayac =0;
	int max =0;
	int min =0;
	
	for(sayac=0;sayac<10;sayac++)
	{
		printf("%i,sayi : ",sayac+1 );
		scanf("%i",&sayilar[sayac]);
		fflush(stdin);
		
		if(sayac== 0)
		min = sayilar[sayac];
		
		if(sayilar[sayac]>max)
		max = sayilar[sayac];
		
		if(sayilar[sayac]<min)
		min = sayilar[sayac];
		
	}
	
	printf("\n En Buyuk Sayi : %i",max);
	printf("\n En Kucuk Sayi : %i ",min);
	
	getch();
}
//Bir "for" döngüsü oluþturulur. Bu döngü, kullanýcýdan 10 tane sayý girdirir ve bu sayýlarý "sayilar" dizisine atar. Ayrýca, her sayý girildikten sonra, eðer sayý dizinin ilk elemaný ise "min" deðiþkenine atanýr. Daha sonra, eðer girilen sayý "max" deðiþkeninden büyükse "max" deðiþkenine atanýr ve eðer girilen sayý "min" deðiþkeninden küçükse "min" deðiþkenine atanýr.
//Döngü bittikten sonra, en büyük ve en küçük sayý ekrana yazdýrýlýr.
