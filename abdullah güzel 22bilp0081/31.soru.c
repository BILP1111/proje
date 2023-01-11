/* negatif bir sayı girilene kadar kullanıcıdan değer isteyen program */

#include <stdio.h>

int main(void) {
    int sayi;

    printf("Lütfen bir sayı giriniz: ");
    scanf("%d", &sayi);

    while (number >= 0) {
        printf("Lütfen negatif bir sayı giriniz: ");
        scanf("%d", &sayi);
    }

    printf("Girdiğiniz negatif sayı: %d\n", sayi);

    return 0;
}
