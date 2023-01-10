#include <stdio.h>

/*
 * Girilen bir sayının for döngüsü yardımı ile çarpım tablosunu
 * oluşturan program
 */
int main() {

    int sayi;

    printf("Bir sayı giriniz: ");
    scanf("%d", &sayi);

    for (int i = 0; i < 11; ++i) {
        printf("%ix%i = %i\n",sayi, i, sayi*i);
    }






    return 0;
}


