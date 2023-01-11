#include <stdio.h>

int main(void)
{
	int kenar1, cevre, alan;
	
	printf("Karenin bir kenar uzunlugunu girin: ");
	scanf("%d", &kenar1); /* Kullanýcýdan alýnan degeri oku*/
	
	cevre = 4 * kenar1; /*Cevreyi hesaplamak için 4* girilen kenar*/
	
	alan = kenar1 * kenar1; /*Alaný hesaplamak için kenar * kenar*/
	
	printf("Karenin alani = %d",alan); /*Sonucunda hesaplanan karenin alanýný yaz*/
	printf("\nKarenin cevresi = %d",cevre); /*Sonucunda hesaplanan karenin cevresini yaz*/
}
