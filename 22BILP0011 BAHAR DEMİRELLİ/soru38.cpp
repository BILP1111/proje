#include<stdio.h>
#include<conio.h>

int main()
{
	int sayilar[5];
	int sayac =0;
	int buyuk = 0, kucuk = 0;
	int temp = 0;
	
	
	for(sayac= 0; sayac< 5; sayac++)
	{
		printf("%i. sayi :",sayac+1);
		scanf("%i",&sayilar[sayac]);
		fflush(stdin);
	}
	printf("\n\n Siralama Oncesi...");
	
	for(sayac=0;sayac<5;sayac++)
	{
		printf("\n%i",sayilar[sayac]);
	}
	for(buyuk=0; buyuk<4;buyuk++)
	{
		for(kucuk = buyuk+1;kucuk<5; kucuk++)
		{
			if(sayilar[buyuk]> sayilar[kucuk])
			{
				temp =sayilar[buyuk];
				sayilar[buyuk] = sayilar[kucuk];
				sayilar[kucuk] = temp;
			}
		}
	}
	printf("\n Siralama Sonrasi...");
	
	for(sayac=0;sayac<5;sayac++)
	{
		printf("\n %i",sayilar[sayac]);
	}
	getch();
}
// "sayilar" de�i�keni kullan�c�dan girilen say�lar� tutacak olan bir dizi olacak, "sayac" de�i�keni ise d�ng�ler i�in kullan�lacak, "buyuk" ve "kucuk" de�i�kenleri ise s�ralama i�lemi i�in kullan�lacak ve "temp" de�i�keni ise ge�ici olarak say�lar�n yerlerini de�i�tirirken kullan�lacakt�r.

//Bir "for" d�ng�s� olu�turulur. Bu d�ng�, kullan�c�dan 5 tane say� girdirir ve bu say�lar� "sayilar" dizisine atar.
