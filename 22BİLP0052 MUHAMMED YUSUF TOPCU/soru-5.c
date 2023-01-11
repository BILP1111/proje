#include <stdio.h>

int main()
{
	int a, b;

	printf("Lutfen dikdortgenin kenar uzunluklarini girin: ");
	scanf("%d %d", &a, &b);
//Kenar Uzunluklarý Deðeri Ýster.
	int alan = a * b;
	int cevre = 2 * (a + b);
//Dikdörtgenin Alan ve Çevre formülleri
	printf("Dikdortgenin alani: %d\n", alan);
	printf("Dikdortgenin cevresi: %d\n", cevre);
//Dikdörtgenin alanýný ve çevresini  ekrana yazar.
return 0;
}
