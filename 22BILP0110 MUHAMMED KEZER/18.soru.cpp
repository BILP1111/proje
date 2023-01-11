//basit dört iþlem ve mod yapabilen program

#include <stdio.h>

int main()
{
    int a, b;
    printf("iki sayi girin:");
    scanf("%d %d", &a, &b);

    int toplam = a + b;
    printf("Toplam: %d\n", toplam);

    int cikarma = a - b;
    printf("cikarma: %d\n",cikarma);

    int carpma = a * b;
    printf("carpma: %d\n", carpma);

    int bolme;
    if (b == 0) {
        printf("Sifira bolme hatasi!\n");
    }
    else {
        bolme = a / b;
        printf("bolme: %d\n", bolme);
    }

    int mod;
    if (b == 0) {
        printf("Sifira bolme hatasi!\n");
    }
    else {
        mod = a % b;
        printf("Mod: %d\n", mod);
    }

    return 0;
	}
