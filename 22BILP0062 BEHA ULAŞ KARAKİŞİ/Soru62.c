#include <stdio.h>

int carpimYaz(int carp, int sayi) {
    printf("%ix%i = %i\n", carp, sayi, carp*sayi);
}

/*
 * Kullanıcı tarafından girilen bir sayının carpimYaz fonksiyonu ile
 * çarpım tablosunu yazdırılmasını sağlayan program
 */

int main() {

    int sayi;
    printf("Bir sayı giriniz: ");
    scanf("%i",&sayi);

    for (int i = 1; i <= 10; ++i) {
        carpimYaz(i, sayi);
    }

    return 0;
}


