// Kullanýcýn gireceði 5 sayiyi kullanýcýnýn istediði düzende sýralayýp ekrana listeyen program.

#include <stdio.h> // KÜTÜPHANE TANIMLAMA 
#include <conio.h> // KÜTÜPHANE TANIMLAMA

int main()
{

	int sayilar[5]; // SAYISAL DEÐÝÞKENÝ OLARAK sayilar DEÐERÝ TANIMLIYORUZ VE 5 KRÝTERÝ BELÝRLÝYORUZ
	int n = 0; // SAYISAL DEÐÝÞKENÝ OLARAK n DEÐERÝ TANIMLIYORUZ VE 0 A EÞÝTLÝYORUZ
	int sayac = 0; // SAYISAL DEÐÝÞKENÝ OLARAK sayac DEÐERÝ TANIMLIYORUZ  VE 0 A EÞÝTLÝYORUZ
	int buyuk = 0; // SAYISAL DEÐÝÞKENÝ OLARAK buyuk DEÐERÝ TANIMLIYORUZ  VE 0 A EÞÝTLÝYORUZ
	int kucuk = 0; // SAYISAL DEÐÝÞKENÝ OLARAK kucuk DEÐERÝ TANIMLIYORUZ  VE 0 A EÞÝTLÝYORUZ
	int temp = 0; // SAYISAL DEÐÝÞKENÝ OLARAK temp DEÐERÝ TANIMLIYORUZ  VE 0 A EÞÝTLÝYORUZ
	char siralama; // KARAKTER DEÐÝÞKENÝ OLARAK siralama ADÝNDA DEÐER TANIMLIYORUZ
	char devami; // KARAKTER DEÐÝÞKENÝ OLARAK devami ADÝNDA DEÐER TANIMLIYORUZ
	
	do // DÖNGÜNÜN BAÞA SARMASINI SAÐLAR
	{
		for(n = 0 ; n < 5 ; n++ ) // DÖNGÜ AÇIYORUZ n DEÐERÝNÝ 0 A EÞÝTLÝYORUZ n DEÐERÝ 5 OLANA KADAR DEÐERÝ 1 ARTTIRIYORUZ
		{
		printf(" %d. sayi : ",n+1); // n+1 DEÐERÝNÝ EKRANA %d KOMUTUYLA ÇAÐIRIYORUZ
		scanf("%d",&sayilar[n]); // sayilar[n] DEÐERÝNÝ EKRANA %d KOMUTUYLA ÇAÐIRIYORUZ
		}
		
		printf("\n\nSiralama (D-Duz | T-Ters) : \n\n"); // KULLANICIDAN DEÐER ALIYORUZ
		scanf("%c",&siralama); // DEÐERÝ HAFIZADA TUTUYORUZ
		
		printf("\n\nSiralama oncesi. "); // EKRANA YAZDIRMA
		
		for(n=0 ; n < 5 ; n++) // n DEÐERÝNÝ 0 A EÞÝTLÝYORUZ n DEÐERÝ 5 OLANA KADAR DEÐERÝ 1 ARTTIRIYORUZ
		{
			printf(" %d -> ",sayilar[n]); // sayilar[n] DEÐERÝNÝ %d KOMUTUYLA EKRANA ÇAÐIRIYORUZ
		}
		if( siralama == 'D' || siralama == 'd' ) // EÐER siralama DEÐERÝ D VEYA d ÝSE
		{
			for(buyuk=0; buyuk<4 ; buyuk++) // buyuk DEÐERÝNÝ 0 A EÞÝTLÝYORUZ buyuk DEÐERÝ 4 DEN KÜÇÜK OLANA KADAR buyuk DEÐERÝNÝ 1 ARTTIRIYORUZ
			{
				for(kucuk = buyuk + 1; kucuk < 5; kucuk++) // kucuk DEÐERÝNÝ buyuk + 1 DEÐERÝNE EÞÝTLÝYORUZ kucuk DEÐERÝ 5 OLANA KADAR kucuk DEÐERÝNÝ 1 ARTTIR
				{
					if(sayilar[buyuk] > sayilar[kucuk]) // EÐER sayilar[buyuk] DEÐERÝ sayilar[kucuk] DEÐERÝNDEN BÜYÜKSE
					{
						temp = sayilar[buyuk]; // temp DEÐERÝNÝ sayilar[buyuk] DEÐERÝNE EÞÝTLÝYORUZ
						sayilar[buyuk] = sayilar[kucuk]; // sayilar[buyuk] DEÐERÝNÝ sayilar[kucuk] DEÐERÝNE EÞÝTLÝYORUZ
						sayilar[kucuk] = temp; // sayilar[kucuk] DEÐERÝNÝ temp DEÐERÝNE EÞÝTLÝYORUZ
					}
				}
			}
		}
	else if( siralama == 'T' || siralama == 't') // DEÐÝLSE EÐER siralama T VEYA t ÝSE
	{
		for( buyuk=0; buyuk<4; buyuk++) // buyuk DEÐERÝNÝ 0 A EÞÝTLÝYORUZ buyuk DEÐERÝ 4 TEN KÜÇÜK OLANA KADAR n DEÐERÝNÝ 1 ARTTIRIYORUZ
		{
			for(kucuk = buyuk+1; kucuk<5; kucuk++) // kucuk DEÐERÝNÝ buyuk + 1 DEÐERÝNE EÞÝTLÝYORUZ kucuk DEÐERÝ 5 TEN KÜÇÜK OLANA KADAR kucuk DEÐERÝNÝ ARTTIRIYORUZ
			{
				if(sayilar[buyuk] < sayilar[kucuk]) // EÐER sayilar[buyuk] DEÐERÝ sayilar[kucuk] DEÐERÝNDEN KÜÇÜK ÝSE
				{
					temp = sayilar[buyuk]; // temp DEÐERÝNÝ sayilar[buyuk] DEÐERÝNE EÞÝTLÝYORUZ
					sayilar[buyuk] = sayilar[kucuk]; // sayilar[buyuk] DEÐERÝNÝ sayilar[kucuk] DEÐERÝNE EÞÝTLÝYORUZ
					sayilar[kucuk] = temp; // sayilar[kucuk] DEÐERÝNÝ temp DEÐERÝNE EÞÝTLÝYORUZ
				}
			}
		}
	}
	else // DEÐÝLSE
	{
		printf("\n\nHATALI SIRALAMA! "); // EKRANA YAZDIRMA

	}
	
	printf("\n\nSiralamadan sonra "); // EKRANA YAZDIRMA
	
	for(n= 0 ; n < 5; n++) // n DEÐERÝNÝ 0 A EÞÝTLÝYORUZ n DEÐERÝ 5 TEN KÜÇÜK OLANA KADAR n DEÐERÝNÝ 1 ARTTIRIYORUZ
	{
		printf(" %d -> ",sayilar[n]); // sayilar[n] DEÐERÝNÝ EKRANA ÇAÐIRIYORUZ %d KOMUTUYLA
	}
	
	printf("\n\nTekrar siralama yapmak istiyor musunuz : "); // EKRANA YADIRMA
	devami = getchar(); // devami DEÐERÝNÝ klavyeden girilen char deðiþkenine atar
	}
	while(devami == 'E' || devami == 'e'); // KOÞUL AÇIYORUZ devami E VEYA e ÝSE
}
