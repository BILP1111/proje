#include <stdio.h>

int main() 
{
    float ukenar, kkenar;
    printf("Uzun kenar uzunlugunu cm cinsinden giriniz: ");
    scanf("%f",&ukenar);
    printf("Kisa kenar uzunlugunu cm cinsinden giriniz: ");
    scanf("%f",&kkenar);
    printf("Girdiginiz dikdortgenin cevresi: %.2fcm alani: %.2fcm", (ukenar*2)+(kkenar*2), ukenar*kkenar);
    return 0;
}
