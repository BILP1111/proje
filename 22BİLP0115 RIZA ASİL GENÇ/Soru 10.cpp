#include <stdio.h>

int main() {
    int sayi,sayi2;
    printf("Bir sayi giriniz: ");
    scanf("%i",&sayi);

    printf("Bir sayi daha giriniz: ");
    scanf("%i",&sayi2);

    printf("%i sayisi ikinci girdiginiz %i %s",sayi,sayi2,((sayi > sayi2)?"sayisindan buyuktur":sayi==sayi2?"sayisina esittir":"sayisindan kucuktur"));
    return 0;
}
