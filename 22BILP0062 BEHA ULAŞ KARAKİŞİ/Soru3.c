#include <stdio.h>

/*
 * Kullanıcıdan scanf yardımı ile 2 tane sayı isteyen ardından toplamlarını printf ile yazdıran program
 */

int main() {
    int sayi,sayi2;
    printf("Bir sayı giriniz: ");
    scanf("%i",&sayi);


    printf("Bir sayı daha giriniz: ");
    scanf("%i",&sayi2);

    printf("Girdiğiniz sayıların toplamı: %i", sayi+sayi2);
    return 0;
}
