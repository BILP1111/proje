// Girilen yilin artýk yýl olup olmadýðýný tespit eden program.

#include <stdio.h> // KÜTÜPHANE TANIMLAMA

int main() {
	int yil; // DEÐER TANIMLAMA
	printf("Yil Giriniz : "); // KULLANICIDAN DEÐER ALMA
	scanf("%d",&yil); // DEÐERÝ HAFIZADA TUTMA
	
	if(yil % 4 == 0) // EÐER yil 4'E TAM BÖLÜNÜYORSA
	{
		if(yil % 100 == 0) // EÐER yil 100'E TAM BÖLÜNÜYORSA
		{
			if(yil % 400 == 0) // EÐER yil 400'E TAM BÖLÜNÜYORSA
				printf("%d artik yildir.",yil); // SONUCU EKRANA YAZDIRMA
			else // DEÐÝLSE
				printf("%d artik yil degildir.",yil); // SONUCU EKRANA YAZDIRMA
		}
		else // DEÐÝLSE
			printf("%d artik yildir.",yil); // SONUCU EKRANA YAZDIRMA
	}
	else // DEÐÝLSE
		printf("%d artik yil degildir.",yil); // SONUCU EKRANA YAZDIRMA
		
	return 0;
}
