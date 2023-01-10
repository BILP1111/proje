#include <stdio.h>
#include <math.h>

/*
 * Kullanıcı tarafından scanf fonksiyonu ile anınan ardından r olarak atanan yarıçap değişkenini
 * math.h kütüphanesinde bulunan M_PI sabitiyle çarpıp çevresini ve alanını bulan program
 */

int main() {
    float r;
    printf("Yarıçapı cm cinsinden giriniz: ");
    scanf("%f",&r);




    printf("Girdiğiniz çemberin çevresi: %.2fcm alanı: %.2fcm", 2*M_PI*r, M_PI*(r*r));
    return 0;
}
