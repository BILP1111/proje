#include <stdio.h>

int main() {
    int islemNo;
    int sayi1, sayi2;
    printf("Hangi islemi yapmak istersiniz?\n");
    printf("1-TOPLAMA\n");
    printf("2-CIKARMA\n");
    printf("3-CARPMA\n");
    printf("4-BOLME\n");
    printf("5-MOD\n");


    scanf("%i",&islemNo);

    printf("Ilk sayiyi giriniz: ");
    scanf("%d", &sayi1);

    printf("Ikinci sayiyi giriniz: ");
    scanf("%d", &sayi2);


    switch (islemNo) {
        case 1:
            printf("Sayilarin toplami: %d", sayi1+sayi2);
            break;
        case 2:
            printf("Sayilarin farki: %d", sayi1-sayi2);
            break;
        case 3:
            printf("Sayilarin çarpimi: %d", sayi1*sayi2);
            break;
        case 4:
            printf("Sayilarin bolumu: %.2f", (float)sayi1/sayi2);
            break;
        case 5:
            printf("Sayilarin modu: %d", sayi1%sayi2);
            break;

        default:
            printf("Gecersiz islem");
    }
    return 0;
}
