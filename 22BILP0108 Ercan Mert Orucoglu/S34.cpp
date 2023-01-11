#include <stdio.h>
#include <conio.h>
#include <math.h>

int main() {

    int sayi; // 2 deðiþken atadýk
	int bolenler = 0;

    printf("Bir sayý giriniz: "); // kullanýcýdan deðer istedik ve okuttuk
    scanf("%i",&sayi);

    for (int i = 0; i < sayi; ++i)  // for döngüsünde tam bölündüðü sayýlarýn toplamýnýn sayýnýn kendisi yapýp yapmadýðýný kontrol eden döngü yaptýk.
        if(sayi % i == 0) bolenler += i;
}
    if(bolenler == sayi) printf("%i sayýsý mükemmel bir sayýdýr.", sayi);
    else printf("%i sayýsý mükemmel bir sayý deðildir.", sayi);
}
