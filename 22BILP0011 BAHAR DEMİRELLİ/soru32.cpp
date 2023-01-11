#include <stdio.h>

int main(void) {
    char operator;
    double ilk_sayi, ikinci_sayi;

    while (1) {
        printf("Lutfen bir islem giriniz (+, -, *, /): ");
        scanf("%c", &operator);

        printf("Lutfen ilk sayiyi giriniz: ");
        scanf("%lf", &ilk_sayi);

        printf("Lutfen ikinci sayiyi giriniz: ");
        scanf("%lf", &ikinci_sayi);

        if (operator == '+') {
            printf("%.1lf + %.1lf = %.1lf\n", ilk_sayi, ikinci_sayi, ilk_sayi + ikinci_sayi);
        } else if (operator == '-') {
            printf("%.1lf - %.1lf = %.1lf\n", ilk_sayi, ikinci_sayi, ilk_sayi - ikinci_sayi);
        } else if (operator == '*') {
            printf("%.1lf * %.1lf = %.1lf\n", ilk_sayi, ikinci_sayi, ilk_sayi * ikinci_sayi);
        } else if (operator == '/') {
            if (ikinci_sayi == 0) {
                printf("Sifira bolum yapilamaz.\n");
            } else {
                printf("%.1lf / %.1lf = %.1lf\n", ilk_sayi, ikinci_sayi, ilk_sayi / ikinci_sayi);
            }
        } else {
            printf("Gecersiz islem.\n");
        }
    }

    return 0;
}
//"while" döngüsü kullanýlarak kullanýcýnýn istediði sürece tekrar çalýþtýrýlmasý saðlanmýþtýr. 
//Kullanýcýdan bir iþlem girilmesi için bir "scanf" fonksiyonu kullanýlmýþtýr. 
//Girilen iþleme göre, kullanýcýdan iki sayý girmesi için iki tane "scanf" fonksiyonu kullanýlmýþtýr.
// Girilen sayýlar "ilk_sayi" ve "ikinci_sayi" deðiþkenlerine atanmýþtýr. 
