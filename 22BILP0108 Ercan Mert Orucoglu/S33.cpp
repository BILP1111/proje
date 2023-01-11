#include <stdio.h>

int main()
{
	int sayi, rakam, toplam = 0; // int deðiþkeni ile 3 deðiþken atadým
	printf("Bir sayi girin. :  "); // kullanýcýdan bir deðer girmesini istedim
	scanf("%i", &sayi); // girilen deðeri sayý deðiþkeni olarak okuttum.
	
	while(sayi > 0) { // while döngüsü ile sayýdaki rakamlarý toplayan bir döngü yazdým
		rakam = sayi % 10;
		toplam = toplam + rakam;
		sayi = sayi / 10;
	}
	printf("Sayidaki rakamlarin toplami : %i", toplam); // sonucunu printf ile ekrana yazdýrdým.
}
