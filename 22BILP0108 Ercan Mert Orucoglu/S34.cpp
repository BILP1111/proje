#include <stdio.h>
#include <conio.h>
#include <math.h>

int main() {

    int sayi; // 2 de�i�ken atad�k
	int bolenler = 0;

    printf("Bir say� giriniz: "); // kullan�c�dan de�er istedik ve okuttuk
    scanf("%i",&sayi);

    for (int i = 0; i < sayi; ++i)  // for d�ng�s�nde tam b�l�nd��� say�lar�n toplam�n�n say�n�n kendisi yap�p yapmad���n� kontrol eden d�ng� yapt�k.
        if(sayi % i == 0) bolenler += i;
}
    if(bolenler == sayi) printf("%i say�s� m�kemmel bir say�d�r.", sayi);
    else printf("%i say�s� m�kemmel bir say� de�ildir.", sayi);
}
