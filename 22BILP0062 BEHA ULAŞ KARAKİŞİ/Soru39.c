#include <stdio.h>


/*
 * Kullanıcı tarafından girilen 10 sayıyı bir arada yazılmaları için önceden array de depolayan
 * ardından önce çift sayıları sonra tek sayıları sonrada asal sayılarının ekrana yazılmasını
 * sağlayan program
 */
int main() {

    int sayilar[10];

    for (int i = 0; i < 10; ++i) {
        printf("Bir sayı giriniz: ");
        int t;
        scanf("%i",&sayilar[i]);




    }

    printf("Çift Sayılar: ");
    for (int i = 0; i < 10; ++i) {
        if(sayilar[i] % 2 == 0) printf("%i,",sayilar[i]);
    }


    printf("\nTek Sayılar: ");
    for (int i = 0; i < 10; ++i) {
        if(sayilar[i] % 2 == 1) printf("%i,",sayilar[i]);
    }

    printf("\nAsal Sayılar: ");
    for (int i = 0; i < 10; ++i) {
        int found = 0;
        for (int j = 2; j < sayilar[i]; ++j) {
            if(sayilar[i] % j == 0) {
                found = 1;
                break;
            }
        }

        if(!found) printf("%i,", sayilar[i]);
    }



    return 0;
}


