#include <stdio.h>

int main(void)
{
	int kenar1, cevre, alan;
	
	printf("Karenin bir kenar uzunlugunu girin: ");
	scanf("%d", &kenar1); /* Kullan�c�dan al�nan degeri oku*/
	
	cevre = 4 * kenar1; /*Cevreyi hesaplamak i�in 4* girilen kenar*/
	
	alan = kenar1 * kenar1; /*Alan� hesaplamak i�in kenar * kenar*/
	
	printf("Karenin alani = %d",alan); /*Sonucunda hesaplanan karenin alan�n� yaz*/
	printf("\nKarenin cevresi = %d",cevre); /*Sonucunda hesaplanan karenin cevresini yaz*/
}
