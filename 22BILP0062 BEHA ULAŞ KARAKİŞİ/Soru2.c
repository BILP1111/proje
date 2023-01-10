#include <stdio.h>

/*
 * Kullanıcıdan scanf yardımı ile bir sayı aldıktan sonra girilen sayıyı ekrana printf fonksiyonu ile yazdıran program
 */

int main() {
    printf("Bir sayı giriniz: ");

    int sayi;
    scanf("%i",&sayi);

    printf("Girdiğiniz sayı: %i", sayi);
    return 0;
}
