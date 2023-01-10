#include <stdio.h>
#include <limits.h>


/*
 * Girilen 10 sayı içerisinden en küçük ve en büyük sayıları her sayı girildiğinde
 * karşılaştırıp minValue dan küçükse minValue nun sayıya atanması, maxValue dan büyük
 * ise maxValue ya yazılmasını sağlayan ardından bu sayıları ekrana yazdıran program
 *
 * minValue başlangıçta olabilicek en büyük sayı olması için limits.h kütüphanesinden INT_MAX sabiti atanmıştır
 * maxValue başlangıçta olabilicek en küçük sayı olması için limits.h kütüphanesinden INT_MIN sabiti atanmıştır
 */
int main() {

    int minValue = INT_MAX;
    int maxValue = INT_MIN;
    for (int i = 0; i < 10; ++i) {
        printf("Bir sayı giriniz: ");
        int t;
        scanf("%i",&t);

        if(minValue > t) minValue = t;
        if(maxValue < t) maxValue = t;


    }

    printf("Girmiş olduğunuz sayılardan en büyüğü: %i en küçüğü ise: %i dir", maxValue, minValue);



    return 0;
}


