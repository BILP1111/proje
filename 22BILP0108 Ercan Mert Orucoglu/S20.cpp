#include <stdio.h>

int main()
{
	int kenar1, kenar2, kenar3; // int komutu ile 3 tane de�i�ken atad�m 
	
	printf("1. Kenar uzunlugu girin: "); // Kenar uzunluklar�n�n girilmesini isteyip girilen de�eri okuttum
	scanf("%d", &kenar1);
	
	printf("2. Kenar uzunlugu girin: ");
	scanf("%d", &kenar2);
	
	printf("3. Kenar uzunlugu girin: ");
	scanf("%d", &kenar3);
	
	if ((kenar1==kenar2) && (kenar2==kenar3)) // if-else komutu ile matematiksel i�lem yap�p istedi�im durumlarda yazmas� gereken ve onun haricindeki durumlarda
	{                                         // yazmas� gereken bir yap� olu�turdum.
		printf("Bu bir esitkenar ucgendir.");
	}
	else if ((kenar1 == kenar2) || (kenar1 == kenar3) || (kenar2 == kenar3))
	{
		printf("Bu bir ikizkenar ucgendir");
	}
	else
	{
		printf("Bu bir cesitkenar ucgendir.");
	}
}

