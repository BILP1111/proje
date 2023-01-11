#include <stdio.h>

int main()
{
    int yas = 0;

    printf("Yas giriniz:");
    scanf("%d", &yas);
    int hafta = yas * 52;
    int ay = yas * 12;
    int gun = ay * 30;
    int saat = gun * 24;
    int dakika = saat * 60;
    int saniye = dakika * 60;
    printf("Hafta: %d, ay: %d, gun: %d, saat: %d, dakika: %d, saniye: %d", hafta, ay, gun, saat, dakika, saniye);
    return 0;
}