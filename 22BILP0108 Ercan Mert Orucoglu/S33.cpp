#include <stdio.h>

int main()
{
	int sayi, rakam, toplam = 0; // int de�i�keni ile 3 de�i�ken atad�m
	printf("Bir sayi girin. :  "); // kullan�c�dan bir de�er girmesini istedim
	scanf("%i", &sayi); // girilen de�eri say� de�i�keni olarak okuttum.
	
	while(sayi > 0) { // while d�ng�s� ile say�daki rakamlar� toplayan bir d�ng� yazd�m
		rakam = sayi % 10;
		toplam = toplam + rakam;
		sayi = sayi / 10;
	}
	printf("Sayidaki rakamlarin toplami : %i", toplam); // sonucunu printf ile ekrana yazd�rd�m.
}
