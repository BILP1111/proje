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
//Bir "for" d�ng�s� olu�turulur. Bu d�ng�, kullan�c�dan 10 tane say� girdirir ve bu say�lar� "sayilar" dizisine atar. Ayr�ca, her say� girildikten sonra, e�er say� dizinin ilk eleman� ise "min" de�i�kenine atan�r. Daha sonra, e�er girilen say� "max" de�i�keninden b�y�kse "max" de�i�kenine atan�r ve e�er girilen say� "min" de�i�keninden k���kse "min" de�i�kenine atan�r.
//D�ng� bittikten sonra, en b�y�k ve en k���k say� ekrana yazd�r�l�r.
