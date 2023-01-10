#include <stdio.h>

/*
 * Girilen bir sayının for döngüsü ile faktoriyelini hesaplayıp
 * ekrana yazdıran program
 */

int main() {

    int sayi, carpim;

    printf("Bir sayı giriniz: ");
    scanf("%d", &sayi);
    carpim = sayi;

    if(sayi == 0) carpim = 1;

    for (int i = 1; i < sayi; ++i) {
        carpim *= i;
    }


    printf("%i! = %i", sayi, carpim);


    return 0;
}


