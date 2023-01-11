#include <stdio.h>


int main() 
{
    float kenar;
    printf("Kenar uzunlugunu cm cinsinden giriniz: ");
    scanf("%f",&kenar);

    printf("Girdiginiz karenin cevresi: %.2fcm alani: %.2fcm", kenar*4, kenar*kenar);
    return 0;
}
