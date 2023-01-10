#include <stdio.h>

/*
 * Kullanıcının girmiş olduğu kenar uzunluğunu scanf yardımıyla bir float değişkenine yazdıktan sonra
 * kenar uzunluğunu 4 le çarparak karenin çevre uzunluğunu, karesini alarak alanını hesaplayıp yazdıran
 * bir program
 */

int main() {
    float kenar;
    printf("Kenar uzunluğunu cm cinsinden giriniz: ");
    scanf("%f",&kenar);




    printf("Girdiğiniz karenin çevresi: %.2fcm alanı: %.2fcm", kenar*4, kenar*kenar);
    return 0;
}
