#include <stdio.h>

int main()
{
	int a, b;

	printf("Lutfen dikdortgenin kenar uzunluklarini girin: ");
	scanf("%d %d", &a, &b);
//Kenar Uzunluklar� De�eri �ster.
	int alan = a * b;
	int cevre = 2 * (a + b);
//Dikd�rtgenin Alan ve �evre form�lleri
	printf("Dikdortgenin alani: %d\n", alan);
	printf("Dikdortgenin cevresi: %d\n", cevre);
//Dikd�rtgenin alan�n� ve �evresini  ekrana yazar.
return 0;
}
