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
// "sayilar" deðiþkeni kullanýcýdan girilen sayýlarý tutacak olan bir dizi olacak, "sayac" deðiþkeni ise döngüler için kullanýlacak, "buyuk" ve "kucuk" deðiþkenleri ise sýralama iþlemi için kullanýlacak ve "temp" deðiþkeni ise geçici olarak sayýlarýn yerlerini deðiþtirirken kullanýlacaktýr.

//Bir "for" döngüsü oluþturulur. Bu döngü, kullanýcýdan 5 tane sayý girdirir ve bu sayýlarý "sayilar" dizisine atar.
